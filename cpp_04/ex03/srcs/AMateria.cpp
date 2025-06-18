/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:32:09 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 13:02:45 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type)
{
	std::cout << "AMateria parametized constructor has been called for : " << this->type << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	this->type = copy.type;
	std::cout << "AMateria copy constructor has been called for : " << this->type << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor has been called for : " << this->type << std::endl;
}

const std::string& AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "Ice")
		std::cout << this->type << " : * shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "Cure")
		std::cout << this->type << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		return ;
}
