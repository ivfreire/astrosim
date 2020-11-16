#include <iostream>
#include "sandbox.h"

int main(int argc, char* argv[]) {
	Sandbox* sandbox;
	
	sandbox = new Sandbox();
	
	sandbox->Start();

	bool running = true;
	while (running) sandbox->Update(0.016f);

	sandbox->~Sandbox();
	return 0;
}