#pragma once

#include <math.h>

struct Vector3 {
    float x, y, z;
    void set(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    Vector3 add(Vector3 vector, float scale) {
        this->x += vector.x * scale;
        this->y += vector.y * scale;
        this->z += vector.z * scale;
        return *this;
    }
    Vector3 scale(float scale) {
        this->x = this->x * scale;
        this->y = this->y * scale;
        this->z = this->z * scale;
        return *this;
    }
    float module() {
        return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
    }
    Vector3 unit() {
        Vector3 unit; unit.set(this->x, this->y, this->z);
        return unit.scale(1 / unit.module());
    }
};
struct Dynamics {
    Vector3 position, velocity, acceleration;
    void reset() {
        this->position.x = 0.0f;
        this->position.y = 0.0f;
        this->position.z = 0.0f;

        this->velocity.x = 0.0f;
        this->velocity.y = 0.0f;
        this->velocity.z = 0.0f;

        this->acceleration.x = 0.0f;
        this->acceleration.y = 0.0f;
        this->acceleration.z = 0.0f;
    }
};