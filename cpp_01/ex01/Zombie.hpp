/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:11:09 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/30 14:30:57 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Colors.hpp"

class Zombie
{
	private:
		std::string _name;
		int			id;

	public:
		Zombie();
		~Zombie();
		void announce();
		void setId(int id);
		void setName(std::string name);
};

#endif
