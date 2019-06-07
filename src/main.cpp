#include <engine.h>

#include "body.h"
#include "sandbox.h"

int main(int argc, char* argv[]) {
    // Define global variables
    float dtime = 0.016f;
    Sandbox* sandbox = new Sandbox();

    // Main loop
    bool running = true;
    while (running) {

        sandbox->Update(dtime);
        sandbox->Render();

    }

    // Destroys instances and free up memory space
    sandbox->~Sandbox();

    return 0;
}
