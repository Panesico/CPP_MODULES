#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0) {
	std::cout << "Point constructor called" << std::endl;
}
Point::Point(const float x, const float y) : x(x), y(y){}
Point& Point::operator=(Point &obj)
{
	return obj;
}
Point::Point(Point &obj) : x(obj.x), y(obj.x) {}
Point::~Point(){
	std::cout << "Point destructor called" << std::endl;
}

Fixed const &Point::getY() const{
	return y;
}
Fixed const &Point::getX() const{
	return x;
}