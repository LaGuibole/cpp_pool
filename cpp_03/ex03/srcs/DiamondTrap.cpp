/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:40:21 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/16 16:21:40 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), FragTrap(name), ScavTrap(name), name(name)
{
	this->ClapTrap::name = this->name + "_clap_name";
	this->name = name;
	std::cout << YELLOW "DiamondTrap constructor has been called : " << this->name << RESET << std::endl;
	this->hitPoints = FragTrap::baseHitPoints;
	this->energyPoints = ScavTrap::baseEnergyPoints;
	this->attackDamage = FragTrap::baseAttackDamage;
}

DiamondTrap::~DiamondTrap() {}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(name)
{
	std::cout << YELLOW "DiamondTrap copy constructor has been called" RESET << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << YELLOW "DiamondTrap copy assignment has been called" RESET << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return *this;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "I am the DiamonTrap named : " << this->name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}
