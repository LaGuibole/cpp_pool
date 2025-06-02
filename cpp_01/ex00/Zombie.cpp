/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:31:18 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/30 14:29:17 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Colors.hpp"

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie()
{
	std::cout << RED << this->_name << " has been destroyed" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << GREEN << this->_name << ": BraiiiiiiiinnnzzzZ..." << RESET <<std::endl;
}
