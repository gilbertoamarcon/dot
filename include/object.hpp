#ifndef __OBJECT_HPP__
#define __OBJECT_HPP__

#include "geom.hpp"
#include <vector>

class Object {

private:
	Geom::Pos pos;
	Geom::Pos vel;
	Geom::Pos acc;
	Geom::Pos force;
	double mass;

public:
	Object();
	Object(const Geom::Pos & pos, double mass);
	void displace(const Geom::Pos & displacement);
	void sim(double time, double gravity);
	void computeForce(const std::vector<Object> & others, double time, double floor);
	const Geom::Pos getPos() const;
	inline friend std::ostream& operator<<(std::ostream & os, const Object & object) {
		os << "Object(" << object.pos << ", " << object.mass << ")";
		return os;
	}

};

#endif
