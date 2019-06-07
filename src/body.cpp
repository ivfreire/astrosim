#include "body.h"

Body::Body(std::string title, float mass, float radius) {
    this->title         = title;
    this->mass          = mass;
    this->radius        = radius;

    this->dynamics.reset();
}

void Body::Update(float dtime) {
    this->dynamics.velocity.add(dynamics.acceleration, dtime);
    this->dynamics.position.add(dynamics.velocity, dtime);
}

void Body::Render() {
    
}

Body::~Body() {

}