/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:00:26 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/19 18:04:50 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat crat1("Billie Butcher", 50);
		std::cout << crat1 << std::endl;

		crat1.incrementGrade(30);
		std::cout << "After promotion: " << crat1 << std::endl;
		crat1.incrementGrade(21);
	}
	catch (std::exception& crat1)
	{
		std::cerr << "Error catched :" << crat1.what() << std::endl;
	}

	std::cout << "------------------------------------------------" << std::endl;

	try
	{
		Bureaucrat crat2("Jojo le demago", 151);
	}
	catch (std::exception& crat2)
	{
		std::cerr << "Error catched :" << crat2.what() << std::endl;
	}
	
	return 0;
}
