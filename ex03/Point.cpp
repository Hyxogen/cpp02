#include "Point.hpp"

Point::Point() : x(0), y(0) {

}

Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y) {

}

Point::Point(const Point &other) : x(other.x), y(other.y) {

}

Point::~Point() { }

Point Point::operator+(const Fixed &other) const {
	Point result(x + other.x, y + other.y);
	return result;
}

Point Point::operator-(const Fixed &other) const {
	Point result(x - other.x, y - other.y);
	return result;
}

Point &Point::operator=(const Point &other) {
	return *this;
}

Fixed Point::dot(const Fixed &a, const Fixed &b) {

}
