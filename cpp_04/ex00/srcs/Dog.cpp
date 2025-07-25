/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:31:52 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 17:53:45 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->sound = "Waouuuf!";
	std::cout << "Dog constructor has been called for : " << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destuctor has been called for : " << this->type << std::endl;
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor has been called for : " << this->type << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog copy assignment has been called for : " << this->type << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		this->sound = copy.type;
	}
	return *this;
}
