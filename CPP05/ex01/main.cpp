/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:19:38 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/31 23:19:38 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test("brad", 15);
		Bureaucrat boss("le boss", 1);
		Form form1("form1", 8, 5);
		std::cout << std::endl;
		
		form1.beSigned(test);
		std::cout << form1;
		test.signForm(form1);
		std::cout << std::endl;

		form1.beSigned(boss);
		std::cout << form1;
		boss.signForm(form1);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}