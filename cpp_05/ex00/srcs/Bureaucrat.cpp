/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:47:42 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/23 11:49:47 by guphilip         ###   ########.fr       */
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
	this->name = copy.name;
	this->grade = copy.grade;
	// std::cout << "Bureaucrat copy constructor has been called for this : " << this->name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat destructor has been called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->grade = other.grade;
	}
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

