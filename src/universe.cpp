#include "universe.h"

// Universe's constructor
Universe::Universe() {
    bodies.push_back(new Body("Earth", 5.97e24f, 0.0f));
    bodies.push_back(new Body("Moon", 7.34e22f, 0.0f));

    bodies[1]->dynamics.position.set(3.84e6f, 0.0f, 0.0f);
}

// Universe's updates method
void Universe::Update(float dtime) {
    
    for (Body* body : bodies)
        body->Update(dtime);

    CheckInteraction();
    lifetime += dtime;
}

// Renders the universe
void Universe::Render() {
    std::cout << lifetime << "\t" << "Earth: " << bodies[0]->dynamics.position.x;
    std::cout << " Moon: " << bodies[1]->dynamics.position.x << std::endl;
}

// Checks out if the bodies in the universe are interecting via gravity
void Universe::CheckInteraction() {

    // +-------- JUST A SKETCH --------+ //
    for (Body* body : bodies)
        for (Body* object : bodies)
            if (object != body) {
                Vector3 dist = object->dynamics.position;
                dist.add(body->dynamics.position, -1);
                body->dynamics.acceleration = dist.unit().scale(6.67e-11 * object->mass / pow(dist.module(), 2));
            }

}

// Destroy the universe - THANOS METHOD
Universe::~Universe() {
    
}