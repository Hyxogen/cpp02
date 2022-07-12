#include <iostream>


#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(const Point &a, const Point &b, const Point &c, const Point &point);

int main() {
	std::cout << bsp(Point(), Point(), Point(), Point());
    return 0;
}
