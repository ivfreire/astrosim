#pragma once

#include "body.h"

class Universe {
private:


public:
    Body* body;

    Universe();
    void Update(float dtime);
    void Render();
    ~Universe();

};