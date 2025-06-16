/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:14:18 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/16 22:41:36 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Utils.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor has been called for : " << this->type << std::endl;
}

Animal::Animal(const std::string& type) : type(type)
{
	this->sound = "this animal is dead fo sure";
	std::cout << "Animal constructor has been called for : " << this->type << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copy constructor has been called for : " << this->type << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called for : " << this->type << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	std::cout << "Animal copy assignment has been called for : " << this->type << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return *this;
}

const std::string& Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << this->type << ": " << this->sound << std::endl;
}

void Animal::printAttributes() const
{
	std::cout << LINE << std::endl << "|-> Animal : " << this->type << std::endl << "|-> Sound : " << this->sound << std::endl << LINE << std::endl;
}
