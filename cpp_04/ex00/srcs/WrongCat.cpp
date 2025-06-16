/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:47:29 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/16 22:59:23 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat"){
	std::cout << "WrongCat constructor has been called for : " << this->type << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor has been called for : " << this->type << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor has been called for : " << this->type << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "WrongCat copy assignment has been called for : " << this->type << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		this->sound = copy.sound;
	}
	return *this;
}