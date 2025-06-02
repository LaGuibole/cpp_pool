/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 12:18:47 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/30 14:28:20 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Colors.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main(int argc, char **argv)
{
	Zombie* heapZombie = newZombie("Heapster Zombie");
	heapZombie->announce();
	delete heapZombie;

	randomChump("StackOverflowed Zombie");
	return 0;
}
