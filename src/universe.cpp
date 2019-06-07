#include "universe.h"

// Universe's constructor
Universe::Universe() {
    this->body = new Body("Earth", 50.0f, 50.0f);
    this->body->dynamics.acceleration.x = 9.81f;
}

// Universe's updates method
void Universe::Update(float dtime) {
    body->Update(dtime);
}

// Renders the universe
void Universe::Render() {
    body->Render();
}

// Destroy the universe - THANOS METHOD
Universe::~Universe() {
    
}