#pragma once

#include <iostream>
#include <string>
#include <engine.h>

class Body {
private:
    float time;


public:
    std::string title;
    Dynamics dynamics;
    float mass;
    float radius;

    Body(std::string title, float mass, float radius);
    void Update(float dtime);
    void Render();
    ~Body();

};
