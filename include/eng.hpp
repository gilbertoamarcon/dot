#ifndef __ENG_HPP__
#define __ENG_HPP__

#include "geom.hpp"
#include "fx.hpp"
#include "object.hpp"

class Eng : public Fx {

private:
	Object object;

public:
	void init();
	void cleanup();
	void events();
	void draw();

};

#endif
