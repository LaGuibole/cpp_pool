/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:47:42 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/27 14:21:21 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	// std::cout << "Bureaucrat default constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	new(this)Bureaucrat(copy.name, copy.grade);
	// std::cout << "Bureaucrat copy constructor has been called for this : " << this->name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat destructor has been called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	new(this)Bureaucrat(other);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& crat)
{
	os << crat.getName() << ", bureaucrat grade is " << crat.getGrade() << "." << std::endl;
	return os;
}

const std::string& Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrementGrade(int amount)
{
	if ((this->grade - amount) < 1)
		throw GradeTooHighException();
	else
		this->grade -= amount;
}

void Bureaucrat::decrementGrade(int amount)
{
	if ((this->grade + amount) > 150)
		throw GradeTooLowException();
	else
		this->grade += amount;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high !";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low !";
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		// std::cout << this->name << " attempts to sign this " << form.getName() << " through Bureaucrat signForm() method." << std::endl;
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		// std::cout << "Returned in signForm() method and catched an exception" << std::endl;
		std::cout << this->name << " couldn't sign " << form.getName() << " because: grade too low." << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm& form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}
