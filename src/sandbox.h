#pragma once
#include <engine.h>

#include "universe.h"

class Sandbox {
private:


public:
    Universe* universe;

    Sandbox();
    void Update(float dtime);
    void Render();
    ~Sandbox();

};