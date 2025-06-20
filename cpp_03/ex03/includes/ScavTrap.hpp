/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:17:55 by GP                #+#    #+#             */
/*   Updated: 2025/06/18 14:10:02 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#define SCAVTRAP    "|------------ SCAVTRAP -------------|"

class ScavTrap : virtual public ClapTrap{
    protected:
        std::string name;
    public:
        static const unsigned int baseEnergyPoints = 50;
        ScavTrap();
        ScavTrap(const std::string& name);
        virtual ~ScavTrap();
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& copy);
        void guardGate() const;
        virtual void attack(const std::string& target);
};
