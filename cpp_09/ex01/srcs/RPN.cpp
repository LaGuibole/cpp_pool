/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:59:46 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/07 12:51:35 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	// std::cout << "RPN default constructor has been called" << std::endl;
}

// not used
RPN::RPN(const RPN& copy)
{
	// std::cout << "RPN copy constructor has been called" << std::endl;
	(void)copy;
}
// not used
RPN& RPN::operator=(const RPN& other)
{
	// std::cout << "RPN copy assignement has been called" << std::endl;
	(void)other;
}

RPN::~RPN()
{
	// std::cout << "RPN destructor has been called" << std::endl;
}

const char* RPN::NotEnoughValueException::what() const throw()
{
	return "Error: Not enough value in stack.\n";
}

const char* RPN::InvalidInputException::what() const throw()
{
	return "Error: Invalid input.\n";
}

const char* RPN::DividedByZero::what() const throw()
{
	return "Error: Trying to divide by zero, (WTF?).\n";
}
void RPN::validateDigit(const std::string& digit)
{

}

