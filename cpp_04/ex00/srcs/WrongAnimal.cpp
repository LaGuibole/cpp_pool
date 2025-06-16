/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:44:18 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/16 22:57:16 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Utils.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor has been called for : " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type)
{
	this->sound = "WrongAnimal sound";
	std::cout << "WrongAnimal constructor has been called for : " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor has been called for : " << this->type << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor has been called for : " << this->type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy assignment has been called for : " << this->type << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

const std::string& WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->type << ": " << this->sound << std::endl;
}

void WrongAnimal::printAttributes() const
{
	std::cout << LINE << std::endl << "|-> Animal : " << this->type << std::endl << "|-> Sound : " << this->sound << std::endl << LINE << std::endl;
}
