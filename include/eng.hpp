#ifndef __ENG_HPP__
#define __ENG_HPP__

#include "geom.hpp"
#include "fx.hpp"
#include "object.hpp"
#include <vector>
#include <stdlib.h>

class Eng : public Fx {

private:
	std::vector<Object> objects;
	Object a;
	Object b;

public:
	void init();
	void cleanup();
	void events();
	void draw();

};

#endif
