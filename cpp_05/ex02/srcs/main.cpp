/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:00:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/26 18:04:47 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
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
	else if (type == "shrub")
	{
		std::cout << YELLOW "------------------------------------------------" << std::endl;
		std::cout << "---------------- SHRUBBERY FORM ----------------" << std::endl;
		std::cout << "------------------------------------------------" RESET << std::endl;
	}
	else if (type == "pres")
	{
		std::cout << YELLOW "------------------------------------------------" << std::endl;
		std::cout << "--------------- PRESIDENTIAL FORM --------------" << std::endl;
		std::cout << "------------------------------------------------" RESET << std::endl;
	}
	else if (type == "robotomy")
	{
		std::cout << YELLOW "------------------------------------------------" << std::endl;
		std::cout << "----------------- ROBOTOMY FORM ---------------" << std::endl;
		std::cout << "------------------------------------------------" RESET << std::endl;
	}
}

int main(void)
{
	std::srand(time(NULL));
	try
	{
		print("bureaucrat");
		Bureaucrat crat1("Jojo le demago", 1);
		std::cout << crat1;
		print("form");
		ShrubberyCreationForm shrub("Shrub Target");
		std::cout << shrub;
		PresidentialPardonForm pres("Pres Target");
		std::cout << pres;
		RobotomyRequestForm robotomy("Robotomy Target");
		std::cout << robotomy;
		print("action");
		print("shrub");
		crat1.signForm(shrub);
		crat1.executeForm(shrub);
		print("pres");
		crat1.signForm(pres);
		crat1.executeForm(pres);
		print("robotomy");
		crat1.signForm(robotomy);
		crat1.executeForm(robotomy);
		crat1.executeForm(robotomy);
	}
	catch (std::exception& e)
	{
		std::cout << "Error catched : " << e.what() << std::endl;
	}
}
