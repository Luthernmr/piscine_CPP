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
#include "Intern.hpp"

int main()
{
	
	try
	{
		ShrubberyCreationForm formShrub("test");
		RobotomyRequestForm formRobo("robot");
		PresidentialPardonForm formPresi("presid");
		Bureaucrat Bur1("bob", 50);
		Intern Intern1;
		
		std::cout << std::endl;

		Form* form1 = Intern1.makeForm("PresidentialPardon", "internformtest");
		Form* form2 = Intern1.makeForm("ShrubberyCreation", "internformtest");
		Form* form3 = Intern1.makeForm("RobotomyRequest", "internformtest");

		std::cout << std::endl;

		form1->beSigned(Bur1);
		Bur1.signForm(*form1);
		Bur1.executeForm(*form1);
		Bur1.executeForm(*form2);
		Bur1.executeForm(*form3);

		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}