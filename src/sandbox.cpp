#include "sandbox.h"

Sandbox::Sandbox() {
    this->universe = new Universe();
}

void Sandbox::Update(float dtime) {
    this->universe->Update(dtime);
}

void Sandbox::Render() {
    this->universe->Render();
}

Sandbox::~Sandbox() {
    this->universe->~Universe();
}