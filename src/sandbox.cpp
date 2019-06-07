#include "sandbox.h"

// Sandbox's constructor
Sandbox::Sandbox() {
    this->universe = new Universe();
}

// Sandbox's updates method
void Sandbox::Update(float dtime) {
    this->universe->Update(dtime);
}

// Renders the current simulation
void Sandbox::Render() {
    this->universe->Render();
}

// Destroy the Sandbox environment
Sandbox::~Sandbox() {
    this->universe->~Universe();
}