/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:42:02 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/30 15:59:22 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	srand(std::time(NULL));

	std::cout << "Generating A, B, C" << std::endl << std::endl;

	Base	*tab[3];
	for (int i = 0; i < 3; i++)
		tab[i] = generate();

	std::cout << "Pointers identification" << std::endl;


	for (int i = 0; i < 3; i++)
		identify(tab[i]);

	std::cout << std::endl << "References identification" << std::endl;

	for (int i = 0; i < 3; i++)
		identify(*tab[i]);

	for (int i = 0; i < 3; i++)
		delete tab[i];
}
