/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:53:01 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/04 12:37:13 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Messages.hpp"
#include "Colors.hpp"
#include "cmath"

Fixed::Fixed() : value(0)
{
	std::cout << GREEN DEFAULT RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << BLUE COPY RESET << std::endl;
	*this = copy;
}

Fixed::Fixed(const int n)
{
	std::cout << GREEN INT RESET << std::endl;
	this->value = n << bits;
}

Fixed::Fixed(const float f)
{
	std::cout << BLUE FLOAT RESET << std::endl;
	this->value = roundf(f * (1 << bits));
}

Fixed::~Fixed()
{
	std::cout << RED DESTRUCTOR RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << YELLOW ASSIGN_OP RESET << std::endl;
	if (this != &src)
		this->value = src.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << MAGENTA RAW_GETTER RESET << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << CYAN RAW_SETTER RESET << std::endl;
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
