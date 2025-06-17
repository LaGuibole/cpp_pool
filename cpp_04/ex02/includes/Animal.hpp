/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:37:37 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:14:19 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal{
	protected:
		std::string type;
		std::string sound;
	public:
		Animal();
		Animal(const std::string& type);
		virtual ~Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& other);
		const std::string& getType() const;
		virtual void makeSound() const = 0;
		void printAttributes() const;
};
