#include "Point.hpp"

bool bsp(const Point &a, const Point &b, const Point &c, const Point &p) {
	const Point v0(b - a);
	const Point v1(c - a);
	const Point v2(p - a);

	const float  denom = ((b.x * c.y) - (c.x * b.y)).toFloat();
	const float wa = ((p.x * (b.y - c.y)) + (p.y * (c.x - b.x)) + ((b.x * c.y) - (c.x * b.y))).toFloat() / denom;
	const float wb = ((p.x * c.y) - (p.y * c.x)).toFloat() / denom;
	const float wc = ((p.y * b.x) - (p.x * b.y)).toFloat() / denom;
	return (wa >= 0 && wb >= 0 && wc >= 0 && wa + wb + wc <= 1);
}
