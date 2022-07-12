#include "Point.hpp"

bool bsp(const Point &a, const Point &b, const Point &c, const Point &point) {
	const Point v0(b - a);
	const Point v1(c - a);
	const Point v2(point - a);

	const Fixed d00 = Point::dot(v0, v0);
	const Fixed d01 = Point::dot(v0, v1);
	const Fixed d11 = Point::dot(v1, v1);
	const Fixed d20 = Point::dot(v2, v0);
	const Fixed d21 = Point::dot(v2, v1);

	const Fixed denom = ((d00 * d11) - (d01 * d01));
	const Fixed v = ((d11 *d20) - (d01 * d21)) / denom;
	const Fixed w = ((d00 * d21) - (d01 d20)) / denom;
	return (v >= 0 && w >= 0 && v + w <= 1);
}
