/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:47:38 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/17 17:48:46 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"
#include "Cat.hpp"

class WrongDog : virtual public WrongAnimal{
	public:
		WrongDog();
		virtual ~WrongDog();
		WrongDog(const WrongDog& other);
		WrongDog& operator=(const WrongDog& copy);
        void setSound(const std::string& sound);
		void makeSound() const;
};
