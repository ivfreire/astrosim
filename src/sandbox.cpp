#include "sandbox.h"

Sandbox::Sandbox() {
	this->universe = new Universe();
}


void Sandbox::Start() {
	this->universe->Start();
}

void Sandbox::Update() {
	this->universe->Update();	
}


Sandbox::~Sandbox() {
	this->universe->~Universe();
}