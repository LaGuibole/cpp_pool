/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:27:37 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 16:36:09 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat"){
	this->sound = "Miiiiiiiiiiaouuuuuuu";
	this->catBrain = new Brain();
	std::cout << "Cat constructor has been called for : " << this->type << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor has been called for : " << this->type << std::endl;
	delete this->catBrain;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	this->sound = copy.sound;
	this->type = copy.type;
	this->catBrain = new Brain(*copy.catBrain);
	std::cout << "Cat copy constructor has been called for : " << this->type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment has been called for : " << this->type << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		this->sound = other.sound;
		this->type = other.type;

		if (this->catBrain)
			delete this->catBrain;
		this->catBrain = new Brain(*other.catBrain);
	}
	return *this;
}

void Cat::setIdea(int index, const std::string& idea)
{
	if (catBrain)
		catBrain->setIdea(index, idea);
	else
		std::cout << "This cat cannot think, it has no brain" << std::endl;
}

std::string Cat::getIdea(int index) const
{
	if (catBrain)
		return catBrain->getIdea(index);
	else
	{
		std::cout << "This cat cannot retrieves any idea, it has no brain" << std::endl;
		return "";
	}
}
