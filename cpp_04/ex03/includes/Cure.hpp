/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:42:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 17:29:18 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const std::string& type);
		virtual ~Cure();
		Cure(const Cure& copy);
		Cure& operator=(const Cure& other);
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};
