#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
public:
	const Fixed x, y;

	Point();
	Point(const Fixed &x, const Fixed &y);
	Point(const Point &other);

	~Point();

	Point	operator+(const Fixed &other) const;
	Point	operator-(const Fixed &other) const;

	static Fixed dot(const Fixed &a, const Fixed &b);
private:
	Point &operator=(const Point &other); /* deleted */
};

#endif
