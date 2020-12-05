#include "object.hpp"


Object::Object(){
	pos = Geom::Pos(0,0);
	vel = Geom::Pos(0,0);
	acc = Geom::Pos(0,0);
	force = Geom::Pos(0,0);
	mass = 1.0;
};

Object::Object(const Geom::Pos & pos, double mass){
	this->pos = pos;
	this->vel = Geom::Pos(0,0);
	this->acc = Geom::Pos(0,0);
	this->mass = mass;
};

void Object::displace(const Geom::Pos & displacement){
	this->pos += displacement;
}

void Object::sim(double time, double gravity){
	// acc = force/mass - Geom::Pos(0.0, gravity);
	acc = force/mass;
	vel += acc*time;
	pos += vel*time;
}

void Object::computeForce(const std::vector<Object> & others, double time, double floor){
	force = Geom::Pos(0,0);
	for (const Object & other : others) {
		if (this != &other){
			double distance = pos.distance(other.getPos());
			Geom::Pos diff = pos-other.getPos();
			Geom::Pos diffSquared = diff*diff;
			double distanceSquared = diffSquared.x + diffSquared.y;
			if (distanceSquared < 0.5) {
				force += diff/distanceSquared-vel*time*100.0;
			} else if (distanceSquared < 0.9) {
				force -= diff/distanceSquared;
			}else if (distanceSquared < 1.0) {
				force += diff/distanceSquared-vel*time*100.0;
			}
		}
	}
	// if (pos.y < floor){
	// 	double diff = floor-pos.y;
	// 	force += Geom::Pos(0.0, diff*diff*diff*diff)-vel*time*100.0;
	// }
}

const Geom::Pos Object::getPos() const {
	return this->pos;
}

