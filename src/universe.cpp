#include "universe.h"

// Universe's constructor
Universe::Universe() {
    filelog.open("sandbox.log");
    moonlog.open("moon.log");

    bodies.push_back(new Body("Earth", 5.972e24f, 0.0f));
    bodies.push_back(new Body("Moon", 7.347e22f, 0.0f));

    bodies[1]->dynamics.position.set(3.844e8, 0.0f, 0.0f);
    bodies[1]->dynamics.velocity.set(0.0f, 1.022e3f, 0.0f);
}

// Universe's updates method
void Universe::Update(float dtime) {
    
    for (Body* body : bodies) {
        CheckInteraction(body);
        body->Update(dtime);
    }

    lifetime += dtime;
}

// Renders the universe
void Universe::Render() {
    std::string line;

    line += std::to_string(lifetime / 86400); line += "\tEarth: ";
    line += std::to_string(bodies[0]->dynamics.position.x); line += "\tMoon: ";
    line += std::to_string(bodies[1]->dynamics.position.x);

    std::string moons;
    moons += std::to_string(lifetime / 86400); moons += "\t";
    moons += std::to_string(bodies[1]->dynamics.position.x); moons += "\n";

    moonlog << moons;
    
    std::cout << line << std::endl;
    filelog << line << "\n";
}

// Checks out if the bodies in the universe are interecting via gravity
void Universe::CheckInteraction(Body* body) {
    Vector3 acceleration; acceleration.set(0.0f, 0.0f, 0.0f);
    for (Body* object : bodies) if (object != body) {
        if (this->environment.gravity) acceleration.add(Gravity(body, object), 1.0f);
    }
    body->dynamics.acceleration = acceleration;
}

// Applies the force of gravity to bodies
Vector3 Universe::Gravity(Body* body, Body* object) {
    Vector3 pos = object->dynamics.position;
    pos.add(body->dynamics.position, -1);
    float dist = pos.module();
    return pos.unit().scale(environment.G * object->mass / pow(dist, 2));
}

// Destroy the universe - THANOS METHOD
Universe::~Universe() {
    
}