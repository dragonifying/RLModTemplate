#include "Drawing.hpp"
#include <cmath>

namespace RLMod
{
    Drawing::Drawing()
        : RLModule("Drawing", "Draw helper module", 0)
    {
    }

    Drawing::~Drawing() = default;

    Drawing& Drawing::Get()
    {
        static Drawing instance;
        return instance;
    }

    bool Drawing::ProjectWorldToScreen(
        const VectorF& worldPos,
        const Rotator& camRot,
        const VectorF& camLoc,
        float fovDegrees,
        float screenW,
        float screenH,
        float& outX,
        float& outY)
    {
        // Construct camera basis vectors
        VectorF forward = camRot.GetVector().GetNormalize();
        VectorF up = VectorF(0.f, 0.f, 1.f);
        VectorF right = up.Cross(forward).GetNormalize();
        up = forward.Cross(right).GetNormalize();

        // Compute vector from camera to world position
        VectorF delta = worldPos - camLoc;

        // Project onto camera axes
        float x = delta.Dot(right);
        float y = delta.Dot(up);
        float z = delta.Dot(forward);
        if (z < 1.0f)
            z = 1.0f;

        // Convert FOV to tangent scale
        float halfW = screenW * 0.5f;
        float halfH = screenH * 0.5f;
        float tanFOV = std::tanf(fovDegrees * 3.14159265358979323846f / 360.f);

        // Perform perspective divide
        outX = halfW + (x * (halfW / tanFOV)) / z;
        outY = halfH - (y * (halfW / tanFOV)) / z;

        return true;
    }
}
