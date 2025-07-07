/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 10:59:44 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/07 12:38:07 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <stack>

class RPN{
	private:
		std::stack<double> _value;
		RPN(const RPN& copy);
		RPN& operator=(const RPN& other);

	public:
		RPN();
		~RPN();
		void calculate(std::string args);
		void handleAdd();
		void handleTime();
		void handleDivide();
		void handleSub();
		void validateDigit(const std::string& digit);
		
	class NotEnoughValueException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class InvalidInputException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class DividedByZero : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
