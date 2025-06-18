/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:26:28 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 14:09:58 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

#define FRAGTRAP    "|------------ FRAGTRAP -------------|"

class FragTrap : virtual public ClapTrap{
	protected:
		std::string name;
	public:
		static const unsigned int baseHitPoints = 100;
		static const unsigned int baseAttackDamage = 30;

		FragTrap();
		FragTrap(const std::string& name);
		virtual ~FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& copy);
		void highFiveGuys(void);
		virtual void attack(const std::string& target);
};
