#pragma once

#include <iostream>
#include <string>
#include <cmath>

enum class UniverseModel {
	CLASSICAL_MECHANICS = 0,
	GENERAL_RELATIVITY = 1
};

struct Vector3 {
	double x, y, z;
	void set(double x, double y, double z) { this->x = x; this->y = y; this->z = z; }
	double length() { return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) ; }
	double dot(Vector3 vec) { return this->x * vec.x + this->y * vec.y + this->z * vec.z; }
	Vector3 cross(Vector3 vec) { Vector3 res; res.set(this->y * vec.z - this->z * vec.y, this->z * vec.x - this->x * vec.z, this->x * vec.y - this->y * vec.x); return res; }
	void add(Vector3 vec) { this->x += vec.x; this->y += vec.y; this->z += vec.z; };
	void add(Vector3 vec, float factor) { this->x += vec.x * factor; this->y += vec.y * factor; this->z += vec.z * factor; };
};

struct Dynamics3 {
	Vector3 position, velocity, acceleration;
	void update(float dtime) {
		this->velocity.add(this->acceleration, dtime);
		this->position.add(this->velocity, dtime);
	}
};