/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:55:59 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/13 16:58:35 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"
#include "includes/PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <csignal>
#include <fstream>


int main()
{
	std::string s;
	
	PhoneBook repertoire;
	int nb_of_contact = 0;
	while (std::cin)
	{
		std::cout << "enter a command: ";
		std::getline (std::cin, s);
		if (s.compare("ADD") == 0)
		{
			
			if (nb_of_contact > 7)
			{
				nb_of_contact = 0;
			}
			repertoire.add(nb_of_contact);
			nb_of_contact++;
		}
		else if (s.compare("SEARCH") == 0)
			repertoire.search();
		else if (s.compare("EXIT") == 0)
			exit(0);
	}
	return (0);
}

