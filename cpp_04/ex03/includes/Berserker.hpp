/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Berserker.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:06:25 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 13:10:28 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Berserker : public ICharacter{
	protected:
		std::string name;
		AMateria* spells;
		Berserker();
	public:
		Berserker(const std::string& name);
		~Berserker();
		Berserker(const Berserker& copy);
		Berserker& operator=(const Berserker& other);
};
