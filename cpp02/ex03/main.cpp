#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	Point pepe;

	if (pepe.bsp(Point(0, 0), Point(2, 4), Point(4, 0), Point(2, 3.99)))
		std::cout << std::endl << std::endl << std::endl << "----------" << std::endl << "Inside" << std::endl << "----------" << std::endl << std::endl << std::endl;
	else
		std::cout << "Outside" << std::endl;
	return 0;
}