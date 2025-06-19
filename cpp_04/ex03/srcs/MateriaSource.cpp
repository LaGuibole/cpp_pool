/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:10:49 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/19 10:09:07 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "Default constructor has been called for MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "Destructor has been called for MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _source[i];
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	// std::cout << "Copy constructor has been called for MateriaSource" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] == copy._source[i])
			_source[i] = copy._source[i]->clone();
		else
			_source[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_source[i])
				delete _source[i];
			if (_source[i] == other._source[i])
				_source[i] = other._source[i]->clone();
			else
				_source[i] = NULL;
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_source[i])
		{
			_source[i] = materia->clone();
			break ;
		}
	}
	std::cout << "learning this materia : " << materia->getType() << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i] && _source[i]->getType() == type)
		{
			std::cout << "Creating this materia type : " << type << std::endl;
			return _source[i]->clone();
		}
	}
	return NULL;
}
