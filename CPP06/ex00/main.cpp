/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:03:27 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/27 14:06:34 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits.h>
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "need 2 arguments\n";
		return (0);
	}
	std::string s(argv[1]);
	if ((s.length() == 1) && !isdigit(argv[1][0]) && !isspace(argv[1][0]))
	{
		std::cout << "char : " << "'" <<static_cast<char>(argv[1][0])<< "'" << std::endl;
		std::cout << std::fixed << std::setprecision((1)) << "int : " << static_cast<int>(argv[1][0]) << std::endl;
		std::cout << "float : " << static_cast<float>(argv[1][0]) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(argv[1][0]) << std::endl;
	}
	else
	{
		double test;
		char *pEnd;
		test = std::strtod(argv[1], &pEnd);
		if (pEnd[0] != 0)
		{
			if (strcmp(pEnd, "f"))
			{
				std::cerr << "Plz enter valid argument" << std::endl;
				return (0);	
			}
		}
		if (test != test)
		{
			std::cout << "char : " << "impossible" << std::endl;
			std::cout << "int : " << "impossible" << std::endl;
			
		}
		else
		{
			if (!test || isspace(atoi(argv[1])) || !strcmp(argv[1], "inf") || static_cast<int>(test) > 127 || static_cast<int>(test) < 0)
				std::cout << std::fixed << std::setprecision((1)) <<"char2 : Non diplayable" << std::endl;
			else
				std::cout << "char : " << "'" << static_cast<char>(test) << "'" << std::endl;
			if ((static_cast<int>(test) > INT_MIN && static_cast<int>(test) < INT_MAX))
				std::cout << "int : " << static_cast<int>(test) << std::endl;
			else 
				std::cout << "int : " << "overflow" << std::endl;
		}
		std::cout << "float : " << static_cast<float>(test) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(test) << std::endl;
	}
}