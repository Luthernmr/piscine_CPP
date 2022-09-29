/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:26:13 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/28 16:11:12 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> void display(T &e)
{
	std::cout << CYAN <<" [ " << RESET << e << CYAN << " ] " << RESET;
}

int main()
{
	try
	{
		Array<int> intTab(5);
		Array<std::string> stringTab(5);
		Array<int> intTabCpy;
		Array<std::string> stringTabCpy(stringTab);
		
		std::cout << BOLDRED <<"(int TAB)" << RESET << std::endl;
		for (int i = 0; i < intTab.size(); i++)
		{
			intTab[i] = i;
			display(intTab[i]);
		}
		
		std::cout << std::endl;
		std::cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n" << std::endl;
	
		std::cout << BOLDRED << "(string TAB)" << RESET << std::endl;
		for (int i = 0; i < stringTab.size(); i++)
		{
			stringTab[i] = "luther";
			display(stringTab[i]);
		}

		std::cout << std::endl;
		std::cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n" << std::endl;

		intTabCpy = intTab;
		std::cout << BOLDRED << "(int TabCpy)" << RESET << std::endl;
		for (int i = 0; i < intTabCpy.size(); i++)
		{
			intTabCpy[i] = i + 100;
			display(intTabCpy[i]);
			display(intTab[i]);
		}
		
		std::cout << std::endl;
		std::cout << "\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_\n" << std::endl;
		
		std::cout << BOLDRED << "(string TabCpy)" << RESET << std::endl;
		for (int i = 0; i < stringTabCpy.size(); i++)
		{
			stringTabCpy[i] = "changed";
			display(stringTabCpy[i]);
			display(stringTab[i]);
		}
		//display(stringTabCpy[100]);
		display(stringTabCpy[-100]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}