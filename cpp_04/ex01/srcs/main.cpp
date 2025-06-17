/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:36:52 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 17:04:07 by guphilip         ###   ########.fr       */
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
	const int size = 4;
	Animal* zoo[size];
	Animal* dog = new Dog;

	printConstructor();
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	printActions();

	Dog*	realDog = dynamic_cast<Dog*>(zoo[0]);
	if (realDog)
		realDog->setIdea(0, "I'm a dumb dog");

	Cat*	realCat = dynamic_cast<Cat*>(zoo[2]);
	if (realCat)
		realCat->setIdea(0, "I'll destroy the world");

	std::cout << "Dog[0] idea[0]: " << realDog->getIdea(0) << std::endl;
	std::cout << "Cat[2] idea[0]: " << realCat->getIdea(0) << std::endl;

	// DEEP COPY DEMO
	printConstructor();
	Dog original;
	original.setIdea(0, "Eat snacks");
	Dog copy = original;


	printActions();
	std::cout << "Original dog idea : " << original.getIdea(0) << std::endl;
	std::cout << "Copied dog idea : " << copy.getIdea(0) << std::endl;

	original.setIdea(0, "Eat socks");
	std::cout << "Modified original dog idea :" << original.getIdea(0) << std::endl;
	std::cout << "Copied dog idea : " << copy.getIdea(0) << ". (Should be the same as before)" << std::endl;

	printDestructor();
	for (int i = 0; i < size; i++)
	{
		delete zoo[i];
	}

	return 0;
}
