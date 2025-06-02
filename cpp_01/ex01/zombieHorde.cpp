/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:12:06 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/30 13:44:37 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	if (n <= 0)
		return NULL;
	Zombie* horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		horde[i].setName(name);
		horde[i].setId(i + 1);
	}
	return horde;
}
