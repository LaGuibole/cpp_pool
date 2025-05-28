/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 13:06:20 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/28 13:36:01 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setInfo()
{
	std::string input;

	do {
		std::cout << "First name: ";
		std::getline(std::cin, input);
	} while (input.empty());
	first_name = input;

	do {
		std::cout << "Last name: ";
		std::getline(std::cin, input);
	} while (input.empty());
	last_name = input;

	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
	} while (input.empty());
	last_name = input;

	do {
		std::cout << "Phone Number: ";
		std::getline(std::cin, input);
	}	while (input.empty());
	phone_number = input;

	do {
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);
	} while (input.empty());
	darkest_secret = input;
}

static std::string truncate(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::displaySummary(int index) const
{
	std::cout << "|"
		<< std::setw(10) << index << "|"
		<< std::setw(10) << truncate(first_name) << "|"
		<< std::setw(10) << truncate(last_name) << "|"
		<< std::setw(10) << truncate(nickname) << "|"
		<< std::endl;

}

void Contact::displayFull() const
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;

}
