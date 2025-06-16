/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 01:17:55 by GP                #+#    #+#             */
/*   Updated: 2025/06/16 12:12:45 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

#define SCAVTRAP    "|------------ SCAVTRAP -------------|"

// class ClapTrap;

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(const std::string& name);
        ~ScavTrap();
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& copy);
        void guardGate() const;
};
