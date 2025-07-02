/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:31:38 by guphilip          #+#    #+#             */
/*   Updated: 2025/07/02 17:24:11 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <vector>

int main(void)
{
	std::vector<int> array;

	for (int i = 0; i < 10; i++)
		array.push_back(i * 2);
	try
	{
		easyFind(array, 8);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
