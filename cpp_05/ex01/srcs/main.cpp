/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:00:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/20 16:50:49 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Colors.hpp"

void print(std::string type)
{
	if (type == "bureaucrat")
	{
		std::cout << YELLOW "------------------------------------------------" << std::endl;
		std::cout << "----------------- INIT BUREAUCRAT --------------" << std::endl;
		std::cout << "------------------------------------------------" RESET << std::endl;
	}
	else if (type == "form")
	{
		std::cout << YELLOW "------------------------------------------------" << std::endl;
		std::cout << "-------------------- INIT FORM -----------------" << std::endl;
		std::cout << "------------------------------------------------" RESET << std::endl;
	}
	else if (type == "action")
	{
		std::cout << YELLOW "------------------------------------------------" << std::endl;
		std::cout << "--------------------- ACTIONS ------------------" << std::endl;
		std::cout << "------------------------------------------------" RESET << std::endl;
	}
}

int main(void)
{
	try
	{
		print("bureaucrat");
		Bureaucrat crat1("Billy Butcher", 50);
		std::cout << crat1;
		print("form");
		Form test("Test Form", 10, 10);
		std::cout << test;

		print("action");
		crat1.incrementGrade(30);
		std::cout << "After promotion: " << crat1 << std::endl;
		crat1.incrementGrade(10);
		std::cout << "After promotion: " << crat1 << std::endl;
		crat1.incrementGrade(9);
		crat1.signForm(test);
		std::cout << "After promotion: " << crat1 << std::endl;
		// crat1.decrementGrade(10);
		// std::cout << "After relegation: " << crat1 << std::endl;
		crat1.signForm(test);
	}
	catch (std::exception& crat1)
	{
		std::cerr << "Error catched : " << crat1.what() << std::endl;
	}

	std::cout << "------------------------------------------------" << std::endl;

	try
	{
		Bureaucrat crat2("Jojo le demago", 151);
	}
	catch (std::exception& crat2)
	{
		std::cerr << "Error catched : " << crat2.what() << std::endl;
	}

	return 0;
}
