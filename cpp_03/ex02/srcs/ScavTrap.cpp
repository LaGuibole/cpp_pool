/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:21:58 by GP                #+#    #+#             */
/*   Updated: 2025/06/16 12:46:13 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "Colors.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    std::cout << CYAN "ScavTrap constructor has been called" RESET << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << CYAN "ScavTrap destructor has been called" RESET << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << CYAN "ScavTrap copy constructor has been called" RESET << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << CYAN "ScavTrap copy assignment has been called" RESET << std::endl;
    if (this != &copy)
    {
        this->name = copy.name;
        this->hitPoints = copy.hitPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;
    }
    return *this;
}

void ScavTrap::guardGate() const
{
    std::cout << YELLOW << this->getName() << " switched to Gate Keeper mode" RESET << std::endl;
}

