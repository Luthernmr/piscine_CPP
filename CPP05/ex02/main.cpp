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

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm formShrub("test");
		RobotomyRequestForm formRobo("robot");
		PresidentialPardonForm formPresi("presid");

		Bureaucrat Bur1("Bob", 1);
		Bureaucrat Bur2("Pit", 150);

		std::cout << std::endl;
		formShrub.doSomething();
		formRobo.doSomething();
		formPresi.doSomething();

		Bur1.executeForm(formRobo);
		formRobo.beSigned(Bur1);
		Bur1.signForm(formRobo);
		std::cout << std::endl;

		Bur2.executeForm(formPresi);
		formPresi.beSigned(Bur2);
		Bur2.signForm(formPresi);
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}