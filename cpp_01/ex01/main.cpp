/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:13:42 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/30 14:30:50 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main(int argc, char **argv)
{
	int count;
	std::string name;

	std::cout << "Enter the number of zombies composing the horde: " << std::endl;
	std::cin >> count;
	std::cout << "Enter the name of the zombies: " << std::endl;
	std::cin >> name;
	std::cout << std::endl;
	Zombie* horde = zombieHorde(count, name);
	for (int i = 0; i < count; i++)
		horde[i].announce();
	std::cout << std::endl;
	delete[] horde;
	return 0;
}
