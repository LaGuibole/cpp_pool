/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:11:03 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 11:31:39 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Messages.hpp"
#include "Colors.hpp"
#include "cmath"

Fixed::Fixed() : value(0)
{
	// std::cout << GREEN DEFAULT RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << BLUE COPY RESET << std::endl;
	*this = copy;
}

Fixed::Fixed(const int n)
{
	// std::cout << GREEN INT RESET << std::endl;
	this->value = n << bits;
}

Fixed::Fixed(const float f)
{
	// std::cout << BLUE FLOAT RESET << std::endl;
	this->value = roundf(f * (1 << bits));
}

Fixed::~Fixed()
{
	// std::cout << RED DESTRUCTOR RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	// std::cout << YELLOW ASSIGN_OP RESET << std::endl;
	if (this != &src)
		this->value = src.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& other) const
{
	return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const
{
	return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return this->value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const
{
	return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return this->value != other.value;
}

Fixed Fixed::operator+(const Fixed& other)
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other)
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other)
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other)
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->value++;
	return tmp;
}

Fixed& Fixed::operator--()
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->value--;
	return tmp;
}

int Fixed::getRawBits(void) const
{
	// std::cout << MAGENTA RAW_GETTER RESET << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << CYAN RAW_SETTER RESET << std::endl;
	this->value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << bits));
}

int Fixed::toInt(void) const
{
	return this->value >> bits;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

const Fixed& Fixed::min_const(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max_const(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	return b;
}


