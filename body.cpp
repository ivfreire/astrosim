#include "body.h"

Body::Body(std::string title, float mass, float radius) {
    this->title         = title;
    this->mass          = mass;
    this->radius        = radius;

    this->dynamics.reset();
}

void Body::Update(float tick) {
    this->dynamics.velocity.add(dynamics.acceleration, tick);
    this->dynamics.position.add(dynamics.velocity, tick);
}

void Body::Render() {

}

Body::~Body() {

}