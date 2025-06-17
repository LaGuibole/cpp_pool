/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:14:18 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:19:07 by guphilip         ###   ########.fr       */
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

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor has been called for : " << this->type << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called for : " << this->type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment has been called for : " << this->type << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

const std::string& Animal::getType() const
{
	return this->type;
}

void Animal::printAttributes() const
{
	std::cout << LINE << std::endl << "|-> Animal : " << this->type << std::endl << "|-> Sound : " << this->sound << std::endl << LINE << std::endl;
}
