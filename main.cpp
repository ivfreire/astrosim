#include <engine.h>

#include "body.h"

int main(int argc, char* argv[]) {

    Body* body = new Body("Body", 300.0f, 300.0f);
    body->dynamics.velocity.x = 100;

    float dtime = 0.016f;

    bool running = true;
    while (running) {
        body->Update(dtime);
    }

    return 0;
}
