#ifndef __GEOM_HPP__
#define __GEOM_HPP__

#include <cmath>
#include <ostream>

namespace Geom{

	struct Pos {
		double x;
		double y;
		Pos(): x(0.0), y(0.0) {};
		Pos(double x, double y): x(x), y(y) {};
		Pos & operator+=(const Pos & rhs);
		Pos & operator-=(const Pos & rhs);
		Pos & operator*=(const Pos & rhs);
		Pos & operator/=(const Pos & rhs);
		Pos & operator*=(double scalar);
		Pos & operator/=(double scalar);
		Pos operator+(const Pos & rhs) const;
		Pos operator-(const Pos & rhs) const;
		Pos operator*(const Pos & rhs) const;
		Pos operator/(const Pos & rhs) const;
		Pos operator*(double scalar) const;
		Pos operator/(double scalar) const;
		double modulus() const;
		double distance(const Pos & other) const;
		inline friend std::ostream& operator<<(std::ostream & os, const Pos & pos) {
			os << "Pos(" << pos.x << ", " << pos.y << ")";
			return os;
		}
	};

	struct Color {
		double r;
		double g;
		double b;
		Color(): r(0.0), g(0.0), b(0.0) {};
		Color(double r, double g, double b): r(r), g(g), b(b) {};
	};

}

#endif
