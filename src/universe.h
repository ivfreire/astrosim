#pragma once

#include <engine.h>
#include "body.h"

#define MAX_BODIES	128

#define G			6.67408E-11 

class Universe {
private:


public:
	Body* bodies[MAX_BODIES];


	Universe();

	void Start();
	void Update(float dtime);

	~Universe();

};