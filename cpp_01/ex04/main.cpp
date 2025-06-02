/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:35:17 by guphilip          #+#    #+#             */
/*   Updated: 2025/06/02 13:09:32 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		return (std::cout << "Usage: <./sed> <filename> <s1> <s2>" << std::endl, 1);
	}
	else
	{
		std::string srcFile = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string destFile = srcFile + ".replace";

		std::ifstream input(srcFile);
		std::ofstream output(destFile);

		std::cout << std::boolalpha;
		if (!input.is_open())
		{
			input.clear();
			std::cout << "fs.is_open() = " << input.is_open() << " cannot open source file" << std::endl;
		}
		std::string line;
		while (std::getline(input, line))
		{
			size_t pos = 0;
			if (s1.empty())
				return (std::cerr << "s1 must not be empty" << std::endl, 1);
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos += s2.length();
			}
			output << line << std::endl;
		}
		input.close();
		output.close();
		return 0;
	}
}
