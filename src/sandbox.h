#pragma once

#include <engine.h>
#include "universe.h"

class Sandbox {
private:


public:
	Universe* universe;


	Sandbox();

	void Start();
	void Update();

	~Sandbox();

};