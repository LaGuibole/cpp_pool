/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:36:52 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:04:14 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Utils.hpp"

void printConstructor()
{
	std::cout << LINE << std::endl << CONSTRUCTOR << std::endl << LINE << std::endl;
}

void printDestructor()
{
	std::cout << LINE << std::endl << DESTRUCTOR << std::endl << LINE << std::endl;
}

int main(void)
{
	printConstructor();
	Animal animal("default");
	Dog dog;
	Cat cat;

	std::cout << LINE << std::endl << ANIMAL << std::endl;
	animal.printAttributes();
	std::cout << DOG << std::endl;
	dog.printAttributes();
	std::cout << CAT << std::endl;
	cat.printAttributes();

	std::cout << ACTION << std::endl << LINE << std::endl;

	animal.makeSound();
	dog.makeSound();
	cat.makeSound();

	printConstructor();
	WrongAnimal wrong_animal("default");
	WrongCat wrong_cat;
	WrongDog wrong_dog;
	WrongCat* wrong_cat2 = new WrongCat();
	WrongDog* wrong_dog2 = new WrongDog();
	WrongAnimal* wrong_cat3 = new WrongCat();
	WrongAnimal* wrong_dog3 = new WrongDog();

	std::cout << LINE << std::endl << W_ANIMAL << std::endl;
	wrong_animal.printAttributes();
	std::cout << W_CAT << std::endl;
	wrong_cat.printAttributes();
	std::cout << W_DOG << std::endl;
	wrong_dog.printAttributes();
	std::cout << W_CAT << std::endl;
	wrong_cat2->printAttributes();
	std::cout << W_DOG << std::endl;
	wrong_dog2->printAttributes();
	std::cout << W_CAT << std::endl;
	wrong_cat3->printAttributes();
	std::cout << W_DOG << std::endl;
	wrong_dog3->printAttributes();

	std::cout << ACTION << std::endl << LINE << std::endl;

	wrong_animal.makeSound();
	wrong_cat.makeSound();
	wrong_dog.makeSound();
	wrong_dog.setSound("Miaouuu");
	wrong_dog.makeSound();
	wrong_cat2->makeSound();
	wrong_dog2->makeSound();
	wrong_cat3->makeSound();
	wrong_dog3->makeSound();

	printDestructor();
	delete wrong_cat2;
	delete wrong_cat3;
	delete wrong_dog2;
	delete wrong_dog3;

}
