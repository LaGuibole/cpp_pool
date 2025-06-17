/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:42:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:56:27 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const std::string& type);
		~Cure();
		Cure(const Cure& copy);
		Cure& operator=(const Cure& other);
		Cure* clone() const;
};
