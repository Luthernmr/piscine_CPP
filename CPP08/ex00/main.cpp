/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:47:21 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/29 16:41:45 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
	try
	{
		vector<int> test(5);
		test[0] = 1;
		test[1] = 3;
		test[2] = 3;
		easyfind(test, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		vector<int> test(5);
		test[0] = 1;
		test[1] = 3;
		test[2] = 3;
		easyfind(test, -2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
