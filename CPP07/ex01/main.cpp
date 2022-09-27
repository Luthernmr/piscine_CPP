/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:12:23 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/27 23:25:09 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"


void increment(int &e)
{
	e++;
}

void appendS(std::string &s)
{
	s.append("(oublie)");
}

int main()
{
	int tab[5] = {1,2,3,4,5};
	iter(tab, (size_t)5, &display);
	std::cout << "\n";
	iter(tab, (size_t)5, &increment);
	iter(tab, (size_t)5, &display);
	
	std::cout << "\n\n";
	
	std::string tab2[5] = {"a", "b", "c", "d", "e"};
	iter(tab2, (size_t)5, &display);
	iter(tab2, (size_t)5, &appendS);
	std::cout << "\n";
	iter(tab2, (size_t)5, &display);
	
}