#include <iostream>

class Fixed
{
private:
	int _num;
	static const int _fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed(int num);
	Fixed(float num);
	int toInt( void ) const;
	float toFloat( void ) const;
	Fixed& operator=(const Fixed	&other);
	friend std::ostream& operator<<(std::ostream &os, const Fixed& obj);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};