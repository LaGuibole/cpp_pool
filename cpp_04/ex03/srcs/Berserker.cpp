/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Berserker.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:06:24 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 13:16:22 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Berserker.hpp"

Berserker::Berserker(const std::string& name) : name("Berserker")
{
	std::cout << "Parametized constructor has been called for : " << this->name << std::endl;
}

Berserker::~Berserker()
{
	std::cout << "Destructor has been called for : " << this->name << std::endl;
}

Berserker::Berserker(const Berserker& copy)
{
	std::cout << "Copy constructor has been called for : " << this->name << std::endl;
	this->name = copy.name;
}
Berserker& Berserker::operator=(const Berserker& other)
{
	std::cout << "Copy assignment has been called for : " << this->name << std::endl;
	if (this != &other)
	{
		this->name = other.name;
	}
	return *this;
}

