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
	Pos & Pos::operator*=(double scalar){
		x *= scalar;
		y *= scalar;
		return *this;
	}
	Pos & Pos::operator/=(double scalar){
		x /= scalar;
		y /= scalar;
		return *this;
	}
	double Pos::modulus() const {
		return std::sqrt(x*x + y*y);
	}
	double Pos::distance(const Pos & other) const {
		Pos diff = (*this) - other;
		return diff.modulus();
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
	Pos Pos::operator*(double scalar) const{ 
		return Pos(x*scalar, y*scalar);
	}
	Pos Pos::operator/(double scalar) const{ 
		return Pos(x/scalar, y/scalar);
	}

}
