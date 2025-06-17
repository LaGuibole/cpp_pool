/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:13:54 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 17:53:33 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : virtual public Animal{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& copy);
};
