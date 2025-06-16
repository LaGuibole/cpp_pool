/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 20:47:38 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/16 20:48:10 by guillaumeph      ###   ########.fr       */
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
};