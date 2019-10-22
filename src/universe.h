#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <math.h>

#include <engine.h>
#include "body.h"

class Universe {
private:
    float lifetime;
    void CheckInteraction(Body* body);
    Vector3 Gravity(Body* body, Body* object);

public:
    struct Environment {
        float G = 6.67e-11f;
        bool gravity = true;
    } environment;

    std::vector<Body*> bodies;

    Universe();
    void Update(float dtime);
    void Render();
    ~Universe();

};