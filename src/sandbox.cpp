#include "sandbox.h"

Sandbox::Sandbox() {
	this->universe = new Universe();
}


void Sandbox::Start() {
	this->universe->Start();
}

void Sandbox::Update(float dtime) {
	this->universe->Update(dtime);	
}


Sandbox::~Sandbox() {
	this->universe->~Universe();
}