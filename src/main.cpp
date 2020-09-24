#include <iostream>
#include "sandbox.h"

int main(int argc, char* argv[]) {
	Sandbox* sandbox;
	
	sandbox = new Sandbox();

	sandbox->Update();

	sandbox->~Sandbox();
	return 0;
}