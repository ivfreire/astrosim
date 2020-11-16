#include "body.h"

Body::Body(std::string name, Vector3 position, float mass) {
	this->name = name;
	this->dynamics.position = position;
	this->dynamics.mass = mass;
}


void Body::Update(float dtime) {
	this->dynamics.Update(dtime);
}


void Body::Log() {
	this->dynamics.Log();
}


Body::~Body() {

}