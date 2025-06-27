/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 14:42:33 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/27 14:54:24 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor has been called for ScalarConverter" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor has been called for ScalarConverter" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	std::cout << "Copy asssignment operator has been called for ScalarConverter" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	(void)copy;
	std::cout << "Copy constructor has been called for ScalarConverter" << std::endl;
}

bool ScalarConverter::isChar(const std::string& str)
{
	
}
