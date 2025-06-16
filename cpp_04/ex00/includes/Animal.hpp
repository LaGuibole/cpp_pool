/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:37:37 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/16 17:40:10 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal{
	protected:
		std::string type;
		std::string sound;
		Animal();
	public:
		Animal(const std::string& type);
		~Animal();
		Animal(const Animal& other);
		Animal& operator=(const Animal& copy);
		const std::string& getType() const;
		void makeSound() const;
};
