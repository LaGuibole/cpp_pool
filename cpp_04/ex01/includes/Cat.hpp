/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:13:54 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 16:26:27 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal{
	private:
		Brain* catBrain;
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};
