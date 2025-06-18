/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:40:23 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 14:07:22 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define DIAMONDTRAP    "|----------- DIAMONDTRAP -----------|"


class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string name;
	public:
		DiamondTrap(const std::string& name);
		virtual ~DiamondTrap();
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& copy);
		void whoAmI() const;
		virtual void attack(const std::string& target);
};
