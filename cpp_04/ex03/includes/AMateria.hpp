/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:32:08 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/17 18:59:54 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class AMateria{
	protected:
		AMateria();
		std::string type;
	public:
		AMateria(const std::string& type);
		~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& other);
		const std::string& getType() const;
		virtual AMateria* clone() const = 0;	
		virtual void use(ICharacter& target);
};
