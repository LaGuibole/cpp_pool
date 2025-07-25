/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:42:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 17:29:05 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(const std::string& type);
		virtual ~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& other);
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};
