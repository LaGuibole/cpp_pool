/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:01:03 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/18 16:51:52 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(){};
		virtual void learnMateria(AMateria* materia) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;
};
