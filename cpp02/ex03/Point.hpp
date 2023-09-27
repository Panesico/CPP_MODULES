#include "Fixed.hpp"

class Point{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(const float x, const float y);
	Point(Point &obj);
	Point &operator=(Point &obj);
	~Point();
	bool bsp(Point const& a, Point const& b, Point const& c, Point const& point);
	Fixed const &getY() const;
	Fixed const &getX() const;
};