/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:26:02 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/30 14:35:06 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data* original = new Data;
	original->name = "Sheldon the Dog.";
	original->value = -10;

	uintptr_t raw = Serializer::serialize(original);
	Data* copy = Serializer::deserialize(raw);

	std::cout << "Original adress:		" << original << std::endl;
	std::cout << "Serialized uintptr:		" << raw << std::endl;
	std::cout << "Deserialized ptr:		" << copy << std::endl;
	std::cout << "copy->name:			" << copy->name << std::endl;
	std::cout << "copy->value:			" << copy->value << std::endl;

	delete original;
}
