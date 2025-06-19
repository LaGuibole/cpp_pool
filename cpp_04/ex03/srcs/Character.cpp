/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:06:24 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/19 10:12:04 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"

Character::Character(const std::string& name) : name(name)
{
	// std::cout << "Parametized constructor has been called for : " << this->name << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::~Character()
{
	// std::cout << "Destructor has been called for : " << this->name << std::endl;
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character::Character(const Character& copy)
{
	// std::cout << "Copy constructor has been called for : " << this->name << std::endl;
	this->name = copy.name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	for (int i = 0; i < 4 ;i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}
Character& Character::operator=(const Character& other)
{
	// std::cout << "Copy assignment has been called for : " << this->name << std::endl;
	this->~Character();
	new (this)Character(other);
	return *this;
}

const std::string& Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* materia)
{
	if (!materia)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = materia;
			std::cout << materia->getType() << " Equiped" << std::endl;
			break;
		}
	}
}

void Character::unequip(int index)
{
	if (index >= 0 && index <= 4)
	{
		_inventory[index] = NULL;
		std::cout << "Setting NULL at this index : " << index << std::endl;
	}
}

void Character::use(int index, ICharacter& target)
{
	if (index >= 0 && index <= 4 && _inventory[index])
		_inventory[index]->use(target);
}
