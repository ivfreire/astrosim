#pragma once

#include <iostream>
#include <vector>
#include <math.h>

#include <engine.h>
#include "body.h"

class Universe {
private:
    float lifetime;

public:
    std::vector<Body*> bodies;

    Universe();
    void Update(float dtime);
    void Render();
    void CheckInteraction();
    ~Universe();

};