#pragma once

#include <string>
#include <engine.h>

class Body {
private:


public:
	std::string name;
	Dynamics3 dynamics;
	

	Body(std::string name, Vector3 position, float mass);

	void Update(float dtime);

	void Log();

	~Body();

};