/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:06:16 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/01 14:28:22 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <limits>

class Span{
	private:
		unsigned int _N;
		std::vector<int> _intStock;
		Span();
	public:
		Span(unsigned int N);
		~Span();
		Span& operator=(const Span& other);
		Span(const Span& copy);
		class SpanOverflowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class NotEnoughNumbersException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		void addNumber(int value);
		void addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		int	shortestSpan() const;
		int longestSpan() const;
};
