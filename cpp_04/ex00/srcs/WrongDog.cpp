/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:47:29 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/17 18:05:24 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("Wrong Dog"){
	std::cout << "WrongDog constructor has been called for : " << this->type<< std::endl;
}

WrongDog::~WrongDog(){
	std::cout << "WrongDog destructor has been called for : " << this->type << std::endl;
}

WrongDog::WrongDog(const WrongDog& other)
{
	std::cout << "WrongDog copy constructor has been called for : " << this->type << std::endl;
	*this = other;
}

WrongDog& WrongDog::operator=(const WrongDog& copy)
{
	std::cout << "WrongDog copy assignment has been called for : " << this->type << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		this->sound = copy.sound;
	}
	return *this;
}

void WrongDog::makeSound() const
{
	std::cout << this->type << " : It's a WrongDog sound i guess" << std::endl;
}

void WrongDog::setSound(const std::string& sound)
{
    this->sound = sound;
}
