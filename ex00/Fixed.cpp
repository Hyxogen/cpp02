#include "Fixed.h"

const int Fixed::POINT = 8;

Fixed::Fixed() : _data(0) { }
Fixed::Fixed(const Fixed &other) : _data(other._data) { }

Fixed::~Fixed() { }

Fixed &Fixed::operator=(const Fixed &other) {
	if (this == &other) {
		return *this;
	}
	_data = other;
}

int Fixed::getRawBits() const {
	return _data;
}

int Fixed::setRawBits(const int raw) {
	_data = raw;
}
