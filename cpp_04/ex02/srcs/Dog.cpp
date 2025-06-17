/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:31:52 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:15:49 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog")
{
	this->sound = "Waouuuf!";
	this->dogBrain = new Brain();
	std::cout << "Dog constructor has been called for : " << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destuctor has been called for : " << this->type << std::endl;
	delete this->dogBrain;
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	this->sound = copy.sound;
	this->type = copy.type;
	this->dogBrain = new Brain(*copy.dogBrain);
	std::cout << "Dog copy constructor has been called for : " << this->type << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment has been called for : " << this->type << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		this->sound = other.sound;
		this->type = other.type;

		if (this->dogBrain)
			delete this->dogBrain;
		this->dogBrain = new Brain(*other.dogBrain);
	}
	return *this;
}

void Dog::setIdea(int index, const std::string& idea)
{
	if (dogBrain)
		dogBrain->setIdea(index, idea);
	else
		std::cout << "This dog cannot think, it has no brain" << std::endl;
}

std::string Dog::getIdea(int index) const
{
	if (dogBrain)
		return dogBrain->getIdea(index);
	else
	{
		std::cout << "This dog cannot retrieves any idea, it has no brain" << std::endl;
		return "";
	}
}

void Dog::makeSound() const
{
	std::cout << this->type << ": " << this->sound << std::endl;
}
