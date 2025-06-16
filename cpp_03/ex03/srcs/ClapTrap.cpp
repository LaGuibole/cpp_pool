/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 16:10:21 by GP                #+#    #+#             */
/*   Updated: 2025/06/16 16:09:43 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "Colors.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(const std::string& name) : name(name) {
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << BLUE "ClapTrap constructor has been called : " << this->name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << BLUE "ClapTrap copy constructor has been called : " << this->name << RESET << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << BLUE "Copy assignment operator called : " << this->name << RESET << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << BLUE "ClapTrap destuctor has been called : " << this->name << RESET << std::endl;
}

const std::string& ClapTrap::getName() const
{
    return this->name;
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << GREEN "This " << this->getName() << " attacks " << target << " and deals " << this->attackDamage << " damages" RESET << std::endl;
    this->energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int res = this->hitPoints - amount;
    if (res <= 0)
    {
        this->hitPoints = 0;
        res = 0;
    }
    this->hitPoints = res;
    std::cout << GREEN "This " << this->getName() << " has been hit for " << amount << " damages. Health left : " << this->hitPoints <<  RESET << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        if (this->hitPoints <= 0)
            std::cout << RED "This " << this->getName() << " cannot be repaired because it's lacking hitPoints" RESET << std::endl;
        else if (this->energyPoints <= 0)
            std::cout << RED "This " << this->getName() << " cannot be repaired because it's lacking energyPoints" RESET << std::endl;
    }
    else
    {
        this->hitPoints += amount;
        std::cout << GREEN "This " << this->getName() << " has been healed for about " << amount << " HP. Health left : " << this->hitPoints << RESET << std::endl;
        this->energyPoints--;
    }
}

void ClapTrap::printStats()
{
    std::cout << "|-> Name = " << this->name << std::endl;
    std::cout << "|-> HitPoints = " << this->hitPoints << std::endl;
    std::cout << "|-> Energy Points = " << this->energyPoints << std::endl;
    std::cout << "|-> Attack Damages = " << this->attackDamage << std::endl;
    std::cout << LINE << std::endl;
}
