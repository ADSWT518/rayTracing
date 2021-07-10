cmake_minimum_required(VERSION 3.19)
project(rayTracing)

set(CMAKE_CXX_STANDARD 14)

add_executable(rayTracing
        src/main.cc src/vec3.h src/color.h src/ray.h src/hittable.h src/sphere.h src/hittable_list.h src/rtweekend.h src/camera.h)
