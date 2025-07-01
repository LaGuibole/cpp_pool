/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:23:12 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/01 09:02:31 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <stdexcept>

template<typename T>
class Array
{
	private:
	T* _array;
	size_t _size;
	public:
	Array();
	Array(unsigned int n);
	~Array();
	Array& operator=(const Array& other);
	Array(const Array& copy);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	unsigned int size() const;
};

#include "Array.tpp"
