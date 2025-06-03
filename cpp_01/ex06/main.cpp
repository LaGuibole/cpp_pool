/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 09:41:49 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/03 09:59:44 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "Colors.hpp"

int getLevel(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			return i;
	}
	return -1;
}

void harlSwitch(char *argv, Harl &harl)
{
	int level = getLevel(argv);
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 1:
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 2:
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << GREEN INSIGNIF_MSG RESET;
	}
}

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
		return (std::cout << "Usage <./harlFilter> <filter>\n", 1);
	else
		harlSwitch(argv[1], harl);
	return 0;
}
