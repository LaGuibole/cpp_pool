/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:42:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:49:07 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(const std::string& type);
		~Ice();
		Ice(const Ice& copy);
		Ice& operator=(const Ice& other);
		Ice* clone() const;
};
