#include "Fixed.hpp"

void Fixed::setRawBits( int const raw ){
	this->_num = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_num;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	Fixed::_num = copy._num;
}

Fixed Fixed::operator=(Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		_num = other._num;
	}
	return *this;
}

