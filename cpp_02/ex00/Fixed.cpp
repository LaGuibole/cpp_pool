/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 10:37:51 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/04 11:06:33 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Messages.hpp"
#include "Colors.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << GREEN DEFAULT RESET << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << BLUE COPY RESET << std::endl;
	*this = copy;
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
