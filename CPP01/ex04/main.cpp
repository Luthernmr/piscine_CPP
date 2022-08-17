/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:31:26 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/17 16:31:46 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int	main(int ac, char **av)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string s1;
	std::string s2;
	std::string filename;
	std::string str_looked;
	std::size_t found_pos;

	(void)av;
	if (ac > 1)
	{
		std::cout << "Don't need arguments !" << std::endl;
		return (-1);
	}
	std::cout << "File to read : ";
	std::cin >> filename;
	infile.open(filename);
	if (infile.fail())
	{
		std::cout << "Error file !" << std::endl;
		return (-1);
	}
	filename += ".replace";
	outfile.open(filename);
	if (outfile.fail())
	{
		std::cout << "Error file !" << std::endl;
		infile.close();
		return(-1);
	}
	std::cout << "find : " ;
	std::cin >> s1;
	std::cout << "and replace by : " ;
	std::cin >> s2;
	while (getline(infile, str_looked))
	{
		std::cout << str_looked << std::endl;
		found_pos = str_looked.find(s1);
		if (found_pos != (size_t)-1)
		{
			std::cout << found_pos << std::endl;
			str_looked.erase(found_pos, s1.length());
			str_looked.insert(found_pos, s2);
		}
		outfile << str_looked;
	}
	infile.close();
	outfile.close();
	return(0);
}

