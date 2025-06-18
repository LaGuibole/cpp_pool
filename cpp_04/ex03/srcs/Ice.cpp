/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:44:23 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 13:17:08 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor has been called" << std::endl;
}

Ice::Ice(const std::string& type) : AMateria("Ice")
{
	std::cout << "Ice parametized constructor has been called" << std::endl;
}

Ice::Ice(const Ice& copy)
{
	this->type = copy.type;
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor has been called" << std::endl;
}

Ice* Ice::clone() const
{
	return new Ice();
}
