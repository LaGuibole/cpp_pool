/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:36:49 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/30 16:50:44 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include <iostream>

template<typename T>
void print(const T& str)
{
	std::cout << str << " ";
}

void increment(int& i)
{
	i++;
}

template <typename T, typename F>
void iter(T* array, size_t length, F function)
{
	if (!array || !function)
		return ;
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}
