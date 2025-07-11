/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:27:37 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 17:53:41 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	this->sound = "Miiiiiiiiiiaouuuuuuu";
	std::cout << "Cat constructor has been called for : " << this->type << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor has been called for : " << this->type << std::endl;
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor has been called for : " << this->type << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat copy assignment has been called for : " << this->type << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		this->sound = copy.sound;
	}
	return *this;
}
