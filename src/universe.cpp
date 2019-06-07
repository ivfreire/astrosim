#include "universe.h"

Universe::Universe() {
    this->body = new Body("Earth", 50.0f, 50.0f);
    this->body->dynamics.acceleration.x = 9.81f;
}

void Universe::Update(float dtime) {
    body->Update(dtime);
}

void Universe::Render() {
    body->Render();
}

Universe::~Universe() {
    
}