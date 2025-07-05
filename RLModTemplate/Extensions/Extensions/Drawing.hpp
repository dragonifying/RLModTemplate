#pragma once

#include "../../RLModules/RLModule.hpp"   // adjust path as needed
#include "Math.hpp"                    // your VectorF, Rotator, etc.

namespace RLMod {

    class Drawing : public RLModule
    {
    public:
        Drawing();
        ~Drawing();

        /// Projects a world position into screen space.
        /// @return true if the point is in front of the camera (Z > 0), false otherwise.
        bool ProjectWorldToScreen(
            const VectorF& worldPos,
            const Rotator& camRot,
            const VectorF& camLoc,
            float        fovDegrees,
            float        screenW,
            float        screenH,
            float& outX,
            float& outY
        );

        /// Singleton accessor
        static Drawing& Get();

    private:
        /// Holds the singleton instance
        static Drawing* instance;
    };

} // namespace CodeRed
