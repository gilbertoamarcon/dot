#include "object.hpp"


Object::Object(){
	pos = Geom::Pos(0,0);
};

void Object::displace(const Geom::Pos & displacement){
	this->pos += displacement;
}

Geom::Pos Object::getPos(){
	return this->pos;
}

