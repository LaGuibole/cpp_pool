/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:11:52 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/30 14:32:26 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Default") {}

Zombie::~Zombie()
{
	std::cout << RED "ID = [" << this->id << "] " << this->_name << " has been destroyed" RESET << std::endl;
}

void Zombie::announce(void)
{

	std::cout << GREEN "ID = [" << this->id << "] " << this->_name << ": BraiiiiiiiinnnzzzZ..." RESET << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::setId(int id)
{
	this->id = id;
}
