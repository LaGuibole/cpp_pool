/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:09:43 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/20 14:37:11 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form{
	private:
		const std::string name;
		bool is_signed;
		const int minimumSigningGrade;
		const int minimumExecGrade;
		Form();
	public:
		~Form();
		Form(const std::string& name, const int minimumSigningGrade, const int minimumExecGrade);
		Form(const Form& copy);
		Form& operator=(const Form& other);
		const std::string getName() const;
		bool isFormSigned() const;
		int getSigningGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat& crat);
		class GradeTooHighException : public std::exception{
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				const char * what() const throw();
		};
};

std::ostream& operator<<(std::ostream os, const Form& form);
