/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:44:23 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 13:17:14 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor has been called" << std::endl;
}

Cure::Cure(const std::string& type) : AMateria("Cure")
{
	std::cout << "Cure parametized constructor has been called" << std::endl;
}

Cure::Cure(const Cure& copy)
{
	this->type = copy.type;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor has been called" << std::endl;
}

Cure* Cure::clone() const
{
	return new Cure();
}
