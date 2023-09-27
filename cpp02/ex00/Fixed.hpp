#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed &copy);
	Fixed operator=(Fixed	&other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};