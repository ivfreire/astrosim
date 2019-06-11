#pragma once
#include <engine.h>

#include "universe.h"

class Sandbox {
private:
    float dtime;


public:
    Universe* universe;

    Sandbox();
    void Update();
    void Render();
    ~Sandbox();

};