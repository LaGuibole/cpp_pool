/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:24:20 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/30 16:29:37 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T& min(const T& a, const T&b)
{
	return (a < b ? a : b);
}

template <typename T>
const T& max(const T& a, const T& b)
{
	return (a > b ? a : b);
}
