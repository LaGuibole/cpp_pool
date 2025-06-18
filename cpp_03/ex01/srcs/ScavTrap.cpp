/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:21:58 by GP                #+#    #+#             */
/*   Updated: 2025/06/18 13:39:51 by guphilip         ###   ########.fr       */
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

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        if (this->hitPoints <= 0)
            std::cout << RED "This " << this->getName() << " cannot attack because it's lacking hitPoints" RESET << std::endl;
        else if (this->energyPoints <= 0)
            std::cout << RED "This " << this->getName() << " cannot attack because it's lacking energyPoints" RESET << std::endl;
    }
    else
    {
    std::cout << GREEN "This " << this->getName() << " kiss " << target << " and deals " << this->attackDamage << " damages" RESET << std::endl;
    this->energyPoints--;
    }
}
