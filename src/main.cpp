#include <engine.h>

#include "body.h"
#include "sandbox.h"

int main(int argc, char* argv[]) {
    // Define global variables
    Sandbox* sandbox = new Sandbox();

    // Main loop
    bool running = true;
    while (running) {
        sandbox->Update();
        sandbox->Render();
    }

    // Destroys instances and free up memory space
    sandbox->~Sandbox();

    return 0;
}
