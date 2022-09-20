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
	Bureaucrat test("luther", 5);
	std::cout << test;
	test.gradeUp();
	std::cout << test;
	test.gradeDown();
	std::cout << test;

	Form form1("form1", 8, 5);
	std::cout << std::endl;
	std::cout << form1;
	test.signForm(&form1);
	std::cout << std::endl;
	form1.beSigned(&test);
	std::cout << form1;
	test.signForm(&form1);
	std::cout << std::endl;
}