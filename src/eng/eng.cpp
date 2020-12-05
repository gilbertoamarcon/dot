#include "eng.hpp"



void Eng::init(){};

void Eng::cleanup(){};

void Eng::events(){
	Geom::Pos move;
	float speed = 50.0;
	float frameTime = getFrameTime();
	float displacement = speed*frameTime;
	const Uint8* keyboard = getKeyboard();
	if(keyboard[SDL_SCANCODE_LEFT])
		move += Geom::Pos(-displacement,  0.0);
	if(keyboard[SDL_SCANCODE_RIGHT])
		move += Geom::Pos( displacement,  0.0);
	if(keyboard[SDL_SCANCODE_UP])
		move += Geom::Pos( 0.0, -displacement);
	if(keyboard[SDL_SCANCODE_DOWN])
		move += Geom::Pos( 0.0,  displacement);
	object.displace(move);
};

void Eng::draw(){
	setColor(Geom::Color(100, 100, 100));
	drawDot(object.getPos());
};
