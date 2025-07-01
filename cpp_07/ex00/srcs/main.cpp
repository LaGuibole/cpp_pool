/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:21:49 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/30 16:33:58 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	std::cout << "========================================" << std::endl;
	std::cout << "               BEFORE SWAP" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "========================================" << std::endl;

	::swap(a, b);
	std::cout << "========================================" << std::endl;
	std::cout << "               AFTER SWAP" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "                MIN / MAX" << std::endl;
	std::cout << "min( a, b ) = " << ::min(a,b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a,b) << std::endl;
	std::cout << "========================================" << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";


	std::cout << "========================================" << std::endl;
	std::cout << "               BEFORE SWAP" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "========================================" << std::endl;
	::swap(c,d);
	std::cout << "========================================" << std::endl;
	std::cout << "               AFTER SWAP" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "                MIN / MAX" << std::endl;
	std::cout << "min( c, d ) = " << ::min(c,d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c,d) << std::endl;
	std::cout << "========================================" << std::endl;
}
