/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:34:02 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/03 14:46:38 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	std::string brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << std::setw(20) << "Memory adress of brain	   :" << &brain << std::endl;
	std::cout << std::setw(20) << "Memory address held by PTR :" << &stringPTR << std::endl;
	std::cout << std::setw(20) << "Memory address held by REF :" << &stringREF << std::endl;

	std::cout << std::setw(20) << "Value of brain          :" << brain << std::endl;
	std::cout << std::setw(20) << "Value pointed by PTR	:" << *stringPTR << std::endl;
	std::cout << std::setw(20) << "Value pointed by REF	:" << stringREF << std::endl;

	return 0;
}
