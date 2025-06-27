/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:47:32 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/27 14:17:14 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& other);
		const std::string& getName() const;
		int getGrade() const;
		void incrementGrade(int amount);
		void decrementGrade(int amount);
		void signForm(AForm& form);
		void executeForm(const AForm& form) const;
		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& crat);
