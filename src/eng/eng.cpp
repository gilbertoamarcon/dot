#include "eng.hpp"


void Eng::init(){
	for (int i = 0; i < 100; ++i) {
		double x = static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
		double y = static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
		objects.push_back(Object(Geom::Pos(80.0+x, 45.0+y), 1.0));
	}
};

void Eng::cleanup(){};

void Eng::events(){
	double frameTime = getFrameTime();
	for (Object & object : objects) {
		object.computeForce(objects, frameTime, 40.0);
	}
	for (Object & object : objects) {
		object.sim(frameTime, 10.0);
	}
};

void Eng::draw(){
	setColor(Geom::Color(255, 255, 255));
	for (Object const& object : objects) {
		drawDot(object.getPos());
	}
};
