/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:36:52 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/16 17:41:05 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal animal("default");
	Dog dog;
	Cat cat;

	animal.makeSound();
	dog.makeSound();
	cat.makeSound();
}
