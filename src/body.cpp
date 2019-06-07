#include "body.h"

Body::Body(std::string title, float mass, float radius) {
    this->title         = title;
    this->mass          = mass;
    this->radius        = radius;

    this->dynamics.reset();

    time = 0.0f;
}

void Body::Update(float dtime) {
    this->dynamics.velocity.add(dynamics.acceleration, dtime);
    this->dynamics.position.add(dynamics.velocity, dtime);

    time += dtime;
}

void Body::Render() {
    std::cout << title << ": " << time << "s " << dynamics.position.x << std::endl;
}

Body::~Body() {

}