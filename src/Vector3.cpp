// implements the math functions

#include "Vector3.hpp"
#include <cmath>

namespace dotty {

    float length(const Vector3& v) {
        return std::sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z)); // Pythagorean theorem in 3D
    }

    Vector3 normalize(const Vector3& v) {
        float len = length(v);
        if (len == 0.0f) return Vector3{0.0f, 0.0f, 0.0f}; // prevent division by 0
        return Vector3{v.x / len, v.y / len, v.z / len};
    }

    float dot(const Vector3& a, const Vector3& b) {
        return (a.x * b.x) + (a.y * b.y) + (a.z * b.z); // multiply matching coordinates and add them up
    }

} // namespace dotty