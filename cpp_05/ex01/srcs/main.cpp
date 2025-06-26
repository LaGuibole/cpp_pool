/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:00:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/26 15:01:47 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
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

	std::cout << "------------------------------------------------" << std::endl;

	try
	{
		Bureaucrat crat3("Jaja la demaga", 11);
		Form test2("Test Form", 10, 10);
		crat3.signForm(test2);
	}
	catch (const Form::GradeTooLowException& e)
	{

	}
	catch (std::exception& e)
	{
		std::cerr << "Error catched : " << e.what() << std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl;
	return 0;
}
