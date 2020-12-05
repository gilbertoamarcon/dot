#ifndef __GEOM_HPP__
#define __GEOM_HPP__


namespace Geom{

	struct Pos {
		float x;
		float y;
		Pos(): x(0.0), y(0.0) {};
		Pos(float x, float y): x(x), y(y) {};
		Pos & operator+=(const Pos & rhs);
		Pos & operator-=(const Pos & rhs);
		Pos & operator*=(const Pos & rhs);
		Pos & operator/=(const Pos & rhs);
		Pos operator+(const Pos & rhs) const;
		Pos operator-(const Pos & rhs) const;
		Pos operator*(const Pos & rhs) const;
		Pos operator/(const Pos & rhs) const;
	};

	struct Color {
		float r;
		float g;
		float b;
		Color(): r(0.0), g(0.0), b(0.0) {};
		Color(float r, float g, float b): r(r), g(g), b(b) {};
	};

}

#endif
