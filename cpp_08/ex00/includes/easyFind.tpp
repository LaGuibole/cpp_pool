/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:14:43 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/01 11:45:04 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

template <typename T>
void easyFind(const T& array, int n)
{
	for (int i = 0; i < (int)(sizeof(array)/sizeof(array[0])); i++)
	{
		if (array[i] == n)
		{
			std::cout << "Occurence " << n << " has been found at index: " << i << std::endl;
			return ;
		}
	}
	throw easyFind::OccurenceNotFoundException();
}
