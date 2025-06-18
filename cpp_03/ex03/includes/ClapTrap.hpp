/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:58:46 by GP                #+#    #+#             */
/*   Updated: 2025/06/18 14:09:53 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

#define CLAPTRAP    "|------------ CLAPTRAP -------------|"

class ClapTrap {
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        virtual ~ClapTrap();
        const std::string& getName() const;
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void printStats();
};
