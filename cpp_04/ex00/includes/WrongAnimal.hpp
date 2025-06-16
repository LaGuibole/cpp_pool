/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:44:17 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/16 22:55:09 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
		std::string sound;
		WrongAnimal();
	public:
		WrongAnimal(const std::string& type);
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& copy);
		const std::string& getType() const;
		void makeSound() const;
		void printAttributes() const;
};