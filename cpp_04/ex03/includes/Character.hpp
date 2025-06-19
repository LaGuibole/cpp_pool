/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:06:25 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 17:30:42 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter{
	protected:
		std::string name;
		AMateria* _inventory[4];
		Character();
	public:
		Character(const std::string& name);
		virtual ~Character();
		Character(const Character& copy);
		Character& operator=(const Character& other);
		const std::string& getName() const;
		virtual void equip(AMateria* materia);
		virtual void unequip(int index);
		virtual void use(int index, ICharacter& target);
};
