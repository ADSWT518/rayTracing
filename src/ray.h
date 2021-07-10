//
// Created by adswt518 on 7/7/21.
//

#ifndef RAYTRACING_RAY_H
#define RAYTRACING_RAY_H

#include "vec3.h"

class ray {
public:
    ray() {}

    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    point3 origin() const { return orig; }

    vec3 direction() const { return dir; }

    point3 at(double t) const {
        return orig + t * dir;
    }

public:
    point3 orig;    // ray origin
    vec3 dir;       // ray direction
};

#endif //RAYTRACING_RAY_H
