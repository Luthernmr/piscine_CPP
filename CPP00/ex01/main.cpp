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

#include "includes/Account.hpp"
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
	int	contact_set = 0;
	while (std::cin)
	{
		std::cout << "enter a command: ";
		std::getline (std::cin, s);
		if (s.compare("ADD") == 0)
		{
			
			if (nb_of_contact - 1 == 7)
			{
				nb_of_contact = 0;
				contact_set = 7;
			}
			repertoire.add(nb_of_contact);
			nb_of_contact++;
			contact_set++;
		}
		else if (s.compare("SEARCH") == 0)
			repertoire.search(contact_set - 1);
		else if (s.compare("EXIT") == 0)
			exit(0); // veirifierles truc a (free);
	}
	return (0);
}

