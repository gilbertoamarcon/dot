#ifndef __OBJECT_HPP__
#define __OBJECT_HPP__

#include "geom.hpp"

class Object {

private:
	Geom::Pos pos;

public:
	Object();
	void displace(const Geom::Pos & displacement);
	Geom::Pos getPos();

};

#endif
