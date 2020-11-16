#include "universe.h"

Universe::Universe() {
	for (int i = 0; i < MAX_BODIES; i++) this->bodies[i] = nullptr;
}


void Universe::Start() {
	this->bodies[0] = new Body("Moon", { 0.0f, 0.0f, 0.0f }, 1.0f);
}

void Universe::Update(float dtime) {
	for (int i = 0; i < MAX_BODIES; i++) if (this->bodies[i]) {
		this->bodies[i]->Update(dtime);
		this->bodies[i]->Log();
	}
}


Universe::~Universe() {

}