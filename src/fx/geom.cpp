#include "geom.hpp"

namespace Geom{

	Pos & Pos::operator+=(const Pos & rhs){ 
		x += rhs.x;
		y += rhs.y;
		return *this;
	}
	Pos & Pos::operator-=(const Pos & rhs){
		x -= rhs.x;
		y -= rhs.y;
		return *this;
	}
	Pos & Pos::operator*=(const Pos & rhs){
		x *= rhs.x;
		y *= rhs.y;
		return *this;
	}
	Pos & Pos::operator/=(const Pos & rhs){
		x /= rhs.x;
		y /= rhs.y;
		return *this;
	}

	Pos Pos::operator+(const Pos & rhs) const{ 
		return Pos(x+rhs.x, y+rhs.y);
	}
	Pos Pos::operator-(const Pos & rhs) const{ 
		return Pos(x-rhs.x, y-rhs.y);
	}
	Pos Pos::operator*(const Pos & rhs) const{ 
		return Pos(x*rhs.x, y*rhs.y);
	}
	Pos Pos::operator/(const Pos & rhs) const{ 
		return Pos(x/rhs.x, y/rhs.y);
	}

}
