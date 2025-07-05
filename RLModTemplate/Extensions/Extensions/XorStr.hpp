#pragma once
#include <cstdint>
#include <string>
#include <utility>

namespace XorStr
{
    // Compile-time FNV-1a 64-bit hash
    constexpr uint64_t fnv1a(const char* s, uint64_t h = 0xcbf29ce484222325ULL)
    {
        return *s ? fnv1a(s + 1, (h ^ *s) * 0x100000001b3ULL) : h;
    }

    // Template class: compile-time encrypted string
    template <size_t N>
    class Encrypted
    {
        alignas(uint64_t) char data_[N];

        // Per-string unique XOR key using __FILE__ and __TIME__
        static constexpr uint8_t key()
        {
            // 64-bit compile-time seeds (promoted to uint64_t before multiply ? no overflow)
            constexpr uint64_t seed1 = static_cast<uint64_t>('X') * 0x045D9F3BULL;
            constexpr uint64_t seed2 = static_cast<uint64_t>('Y') * 0x27D4EB2FULL;

            // Mix the seeds into one 64-bit constant
            constexpr uint64_t kRand = seed1 ^ seed2;

            // Hash this TU’s file + build time, XOR with kRand, keep low byte
            return static_cast<uint8_t>((fnv1a(__FILE__ __TIME__) ^ kRand) & 0xFF);
        }

        static constexpr char enc(char c, size_t i)
        {
            return c ^ static_cast<char>(key() + i * 31);
        }

        template <size_t... I>
        constexpr Encrypted(const char(&plain)[N], std::index_sequence<I...>)
            : data_{ enc(plain[I], I)... }
        {
        }

    public:
        constexpr Encrypted(const char(&plain)[N])
            : Encrypted(plain, std::make_index_sequence<N>{})
        {
        }

        std::string get() const
        {
            std::string result(data_, data_ + N - 1); // skip null terminator
            for (size_t i = 0; i < N - 1; ++i)
                result[i] ^= static_cast<char>(key() + i * 31);
            return result;
        }
    };
}

// Pass as const char* to fix ImGui/printf compatibility
#define XS(str) XorStr::Encrypted<sizeof(str)>(str).get().c_str()
