/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:14:05 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:17:38 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain*	dogBrain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
		void makeSound() const;
};
