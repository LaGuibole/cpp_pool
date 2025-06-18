/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:32:08 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 13:09:01 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include <vector>

class AMateria{
	protected:
		AMateria();
		std::string type;
		std::vector<AMateria*> materiaSpells;
	public:
		AMateria(const std::string& type);
		~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& other);
		const std::string& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
