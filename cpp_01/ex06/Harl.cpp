/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:41:44 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/03 09:50:35 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colors.hpp"

void Harl::debug() {std::cout << GREEN DEBUG_MSG RESET;}
void Harl::info() {std::cout << YELLOW INFO_MSG RESET;}
void Harl::warning() {std::cout << MAGENTA WARNING_MSG RESET;}
void Harl::error() {std::cout << CYAN ERROR_MSG RESET;}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlFunction functions[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << UNKOWN_MSG;
}
