#pragma once

struct Vector3 {
    float x, y, z;
    void add(Vector3 vector, float scale) {
        x += vector.x * scale;
        y += vector.y * scale;
        z += vector.z * scale;
    }
};
struct Dynamics {
    Vector3 position, velocity, acceleration;
    void reset() {
        position.x = 0.0f;
        position.y = 0.0f;
        position.z = 0.0f;

        velocity.x = 0.0f;
        velocity.y = 0.0f;
        velocity.z = 0.0f;

        acceleration.x = 0.0f;
        acceleration.y = 0.0f;
        acceleration.z = 0.0f;
    }
};