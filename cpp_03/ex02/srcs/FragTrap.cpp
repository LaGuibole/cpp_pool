/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:26:31 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 14:04:05 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "Colors.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << MAGENTA "FragTrap consructor has been called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
};

FragTrap::~FragTrap() {
	std::cout << MAGENTA "FragTrap destructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << MAGENTA "FragTrap copy constructor has been called" RESET << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	std::cout << MAGENTA "FragTrap copy assignement has been called" RESET << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	std::string answer;

	std::cout << "Wanna give me an High-Five ? [y] - Yes | [n] - No" << std::endl;
	while (answer != "y" || answer != "n")
	{
		answer = std::getwchar ();
		if (answer == "y")
		{
			std::cout << "Nice, High-Five my friend !" << std::endl;
			break ;
		}
		else if (answer == "n")
		{
			std::cout << "You're such a loser ... T_T" << std::endl;
			break ;
		}
		else
			std::cout << "Wrong input '" << answer << "', try [y] or [n]" << std::endl;
	}
}

void FragTrap::attack(const std::string& target)
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
    std::cout << GREEN "This " << this->getName() << " frags " << target << " and deals " << this->attackDamage << " damages" RESET << std::endl;
    this->energyPoints--;
    }
}
