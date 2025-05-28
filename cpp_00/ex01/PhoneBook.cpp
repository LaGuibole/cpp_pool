/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:54:55 by guphilip          #+#    #+#             */
/*   Updated: 2025/05/28 13:45:33 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {}

void PhoneBook::addContact()
{
	int index = count % 8;
	std::cout << "Ajout du contact a l'index " << index << std::endl;
	contacts[index].setInfo();
	count++;
}

void PhoneBook::searchContacts() const
{
	if (count == 0)
	{
		std::cout << "Aucun contact enregistre << std::endl";
		return;
	}
	std::cout << "|"
		<< std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << "|" << std::endl;

	int displayCount = (count > 8) ? 8 : count;
	for (int i = 0; i < displayCount; ++i)
		contacts[i].displaySummary(i);

	std::cout << "Entrez l'index du contact a afficher : ";
	std::string input;
	std::getline(std::cin, input);

	std::stringstream ss(input);
	int index;
	if (!(ss >> index) || index < 0 || index >= displayCount)
	{
		std::cout << "Index invalide." << std::endl;
		return;
	}
	contacts[index].displayFull();
}
