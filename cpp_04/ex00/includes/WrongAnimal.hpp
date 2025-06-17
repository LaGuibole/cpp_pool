/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:44:17 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/17 18:03:13 by guphilip         ###   ########.fr       */
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
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& copy);
		const std::string& getType() const;
		void makeSound() const;
		void printAttributes() const;
};
