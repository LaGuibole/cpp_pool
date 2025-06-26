/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillaumephilippe <guillaumephilippe@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:11:34 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/26 15:47:52 by guillaumeph      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default Form"), minimumExecGrade(1), minimumSigningGrade(1)
{
	// std::cout << "Default Form constructor has been called" << std::endl;
}

Form::~Form()
{
	// std::cout << "Form destructor has been called" << std::endl;
}

Form::Form(const std::string& name, const int minimumSigningGrade, const int minimumExecGrade) : name(name), minimumExecGrade(minimumExecGrade), minimumSigningGrade(minimumSigningGrade)
{
	// std::cout << "Form parametized constructor has been called" << std::endl;
	this->is_signed = false;
}

Form::Form(const Form& copy) : name(copy.name), minimumExecGrade(copy.minimumExecGrade), minimumSigningGrade(copy.minimumSigningGrade)
{
	// std::cout << "Form copy constructor has been called" << std::endl;
	this->is_signed = copy.is_signed;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		this->is_signed = other.is_signed;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << "Form name -> " << form.getName() << std::endl << "Form Minimum Signing Grade -> " << form.getSigningGrade() << std::endl << "Form Minimum Exec Grade -> " << form.getExecGrade() << std::endl;
	return os;
}

const std::string Form::getName() const
{
	return this->name;
}

bool Form::getSignedStatus() const
{
	return this->is_signed;
}

int Form::getSigningGrade() const
{
	return this->minimumSigningGrade;
}

int Form::getExecGrade() const
{
	return this->minimumExecGrade;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Cannot sign Form, Bureaucrat grade is too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Cannot sign Form, Bureaucrat grade is too low";
}

const char* Form::AlreadySignedException::what() const throw()
{
	return "Form is already signed why would you sign it again ?";
}

void Form::beSigned(const Bureaucrat& crat)
{
	std::cout << "Calling beSigned() method in Form" << std::endl;
	int cratGrade = crat.getGrade();
	if (cratGrade > this->minimumSigningGrade)
		throw GradeTooLowException();
	else if (this->is_signed == true)
		throw AlreadySignedException();
	else
		this->is_signed = true;
}
