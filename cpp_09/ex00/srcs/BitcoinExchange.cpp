/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:28:21 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/03 18:25:09 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	// std::cout << "BitcoinExchange default constructor has been called" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	// std::cout << "BitcoinExchange destructor has been called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const std::string& dbFile)
{
	loadDatabase(dbFile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	this->_DB = copy._DB;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		this->_DB = other._DB;
	}
	return *this;
}

void BitcoinExchange::loadDatabase(const std::string& filename)
{
	std::ifstream file(filename.c_str());
	if (!file)
	{
		std::cerr << "Error: Couldn't open database file." << std::endl;
		std::exit(1);
	}

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::istringstream ss(line);
		std::string date, rateStr;
		if (std::getline(ss, date, ',') && std::getline(ss, rateStr))
		{
			float rate = std::strtof(rateStr.c_str(), NULL);
			_DB[date] = rate;
		}
	}
}

float BitcoinExchange::getRateForDate(const std::string& date) const
{
	std::map<std::string, float>::const_iterator it = _DB.lower_bound(date);
	if (it != _DB.end() && it->first == date)
		return it->second;
	if (it == _DB.begin())
		return -1;
	--it;
	return it->second;
}


bool BitcoinExchange::isValidDate(const std::string& date) const
{
	return date.size() == 10 && date[4] == '-' && date[7] == '-';
}
