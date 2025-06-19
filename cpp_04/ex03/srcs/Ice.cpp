/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:44:23 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 17:33:11 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor has been called" << std::endl;
}

Ice::Ice(const std::string& type) : AMateria(type)
{
	// std::cout << "Ice parametized constructor has been called" << std::endl;
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
	// std::cout << "Ice destructor has been called" << std::endl;
}

Ice* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an " << this->type << " bolt at " << target.getName() << " *" << std::endl;
}

// void AMateria::use(ICharacter& target)
// {
// 	if (this->type == "ice")
// 		std::cout << this->type << " : * shoots an ice bolt at " << target.getName() << " *" << std::endl;
// 	else if (this->type == "cure")
// 		std::cout << this->type << "* heals " << target.getName() << "'s wounds *" << std::endl;
// 	else
// 		return ;
// 	this->use(target);
// }
