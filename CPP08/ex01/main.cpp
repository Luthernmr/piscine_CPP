/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:21:51 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/29 20:49:15 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		
		sp.addNumber(84);
		sp.addNumber(7);
		sp.addNumber(96);
		sp.addNumber(58);
		sp.addNumber(150);
		sp.displaySpan();	
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		
		Span sp2(sp);
		sp2.displaySpan();
		std::cout << sp2.longestSpan() << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int> v;
		std::srand(time(NULL));
		for(int i = 0; i < 2; i++)
		{
			v.push_back(rand());
		}
		Span	sp = Span(2);

		sp.addNumber(v.begin(), v.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.displaySpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	
}