/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:47:38 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/17 17:14:32 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat& operator=(const WrongCat& copy);
		void makeSound() const;
};
