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
	if (ac != 4)
	{
		std::cout << "3 arguemts needed" << std::endl;
		return (-1);
	}
	std::ifstream infile;
	std::ofstream outfile;
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string filename = av[1];
	std::string str_looked;
	std::size_t found_pos;

	(void)av;
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
	while (getline(infile, str_looked))
	{
		while ((found_pos = str_looked.find(s1)) != std::string::npos)
		{
			if (found_pos != (size_t)-1)
			{
				str_looked.erase(found_pos, s1.length());
				str_looked.insert(found_pos, s2);
				found_pos =  str_looked.find(s1, (found_pos + s1.length()));
				std::cout << found_pos << std::endl;
			}
		}
		outfile << str_looked << std::endl;
	}
	infile.close();
	outfile.close();
	return(0);
}

