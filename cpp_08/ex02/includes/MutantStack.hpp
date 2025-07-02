/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:37:16 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/02 13:54:13 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack();
		MutantStack(const MutantStack& copy);
		MutantStack& operator=(const MutantStack& other);
		~MutantStack();

		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;

		reverse_iterator rbegin();
		reverse_iterator rend();

		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"
