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
		Bureaucrat test("Bob", 1);
		std::cout << test.getGrade() << std::endl;
		std::cout << test.getName() << std::endl;
		test.gradeUp();
		std::cout << test.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat test1("Pit", 150);
		std::cout << test1.getGrade() << std::endl;
		std::cout << test1.getName() << std::endl;
		test1.gradeDown();
		std::cout << test1.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat test1("Parker", 150);
		std::cout << test1.getGrade() << std::endl;
		std::cout << test1.getName() << std::endl;
		test1.gradeUp();
		std::cout << test1.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}