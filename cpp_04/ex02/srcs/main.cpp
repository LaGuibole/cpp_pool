/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:36:52 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:26:57 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Utils.hpp"

void printConstructor()
{
	std::cout << LINE << std::endl << CONSTRUCTOR << std::endl << LINE << std::endl;
}

void printDestructor()
{
	std::cout << LINE << std::endl << DESTRUCTOR << std::endl << LINE << std::endl;
}

void printActions()
{
	std::cout << LINE << std::endl;
	std::cout << ACTION << std::endl;
	std::cout << LINE << std::endl;
}

int main(void)
{
	Dog dog;
	Cat cat;
	// Animal* a = new Animal();
	dog.makeSound();
	cat.makeSound();

	return 0;
}
