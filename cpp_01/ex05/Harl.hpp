/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:07:11 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/03 09:38:18 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>
#include <iomanip>

#define DEBUG_MSG "[DEBUG] I love having extra bacon for 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
#define INFO_MSG "[INFO] I cannot believe adding extra beacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
#define WARNING_MSG "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month\n"
#define ERROR_MSG "[ERROR] This is unacceptable! I want to speak to the manager now! I'm the OG Karen, fear me\n"
#define UNKOWN_MSG "Unknown level\n"


class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain(std::string level);
};

typedef void (Harl::*HarlFunction)();

#endif
