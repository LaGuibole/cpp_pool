/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:28:23 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/07 10:57:06 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isValueValid(float value)
{
	return value >= 0 && value <= 1000;
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: couldn't open file" << std::endl;
		return 1;
	}

	BitcoinExchange exchange("data.csv");

	std::ifstream input(argv[1]);
	if (!input.is_open())
	{
		std::cerr << "Error: couldn't open file" << std::endl;
		return 1;
	}

	std::string line;
	std::getline(input, line); // skip header

	while (std::getline(input, line))
	{
		std::istringstream ss(line);
		std::string date, valueStr;

		if (!std::getline(ss, date, '|') || std::getline(ss, valueStr))
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue ;
		}

		date = std::string(date.begin(), date.end() - (date.back() == ' '));
		valueStr.erase(0, valueStr.find_first_not_of(" \t"));
		float value = std::strtof(valueStr.c_str(), NULL);

		if (!exchange.isValidDate(date))
		{
			std::cerr << "Error: invalid date" << std::endl;
		}
	}
}
