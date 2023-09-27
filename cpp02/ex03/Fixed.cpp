#include "Fixed.hpp"
#include <cmath>

int Fixed::toInt( void ) const {
	return static_cast<int>(_num) / (1 << _fractionalBits);
}

float Fixed::toFloat( void ) const {
	return static_cast<float>(_num) / (1 << _fractionalBits);
}

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

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	Fixed::_num = copy._num;
}

Fixed::Fixed(int num) {
	std::cout << "Int constructor called" << std::endl;
	Fixed::_num = (num << _fractionalBits);
}

Fixed::Fixed(float num) {
	std::cout << "Float constructor called" << std::endl;
	Fixed::_num = static_cast<int>(roundf(num * (1 << _fractionalBits)));
}

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		_num = other._num;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return os;
}

bool Fixed::operator>(const Fixed	&other)
{
	return _num > other._num;
}
bool Fixed::operator<(const Fixed	&other)
{
	return _num < other._num;
}
bool Fixed::operator>=(const Fixed	&other)
{
	return _num >= other._num;
}
bool Fixed::operator<=(const Fixed	&other)
{
	return _num <= other._num;
}
bool Fixed::operator==(const Fixed	&other)
{
	return _num == other._num;
}
bool Fixed::operator!=(const Fixed	&other)
{
	return _num != other._num;
}
Fixed& Fixed::operator+(const Fixed	&other)
{
	_num = static_cast<int>(roundf((this->toFloat() + other.toFloat()) * (1 << _fractionalBits)));
	return (*this);
}
Fixed& Fixed::operator-(const Fixed	&other)
{
	_num = static_cast<int>(roundf((this->toFloat() - other.toFloat()) * (1 << _fractionalBits)));
	return (*this);
}
Fixed& Fixed::operator*(const Fixed	&other)
{
	_num = static_cast<int>(roundf((this->toFloat() * other.toFloat()) * (1 << _fractionalBits)));
	return (*this);
}
Fixed& Fixed::operator/(const Fixed	&other)
{
	_num = static_cast<int>(roundf((this->toFloat() / other.toFloat()) * (1 << _fractionalBits)));
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed obj(*this);
	this->_num += static_cast<int>(roundf((this->toFloat() + (1 << _fractionalBits) / (1 << _fractionalBits))));
	return obj;
}
Fixed& Fixed::operator++()
{
	this->_num += static_cast<int>(roundf((this->toFloat() + (1 << _fractionalBits) / (1 << _fractionalBits))));
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed obj(*this);
	this->_num += static_cast<int>(roundf((this->toFloat() - (1 << _fractionalBits) / (1 << _fractionalBits))));
	return obj;
}
Fixed& Fixed::operator--()
{
	this->_num += static_cast<int>(roundf((this->toFloat() - (1 << _fractionalBits) / (1 << _fractionalBits))));
	return *this;
}

Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1.toFloat() < obj2.toFloat())
		return obj1;
	else
		return obj2;
}
const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.toFloat() < obj2.toFloat())
		return obj1;
	else
		return obj2;
}
Fixed& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1.toFloat() > obj2.toFloat())
		return obj1;
	else
		return obj2;
}
const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1.toFloat() > obj2.toFloat())
		return obj1;
	else
		return obj2;
}