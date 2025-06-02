/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:52:43 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/02 10:10:40 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}
Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}
