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
	ShrubberyCreationForm formShrub("test");
	RobotomyRequestForm formRobo("robot");
	PresidentialPardonForm formPresi("presid");
	Bureaucrat Bur1("bob", 15);

	formShrub.doSomething();
	formRobo.doSomething();
	formPresi.doSomething();
	Bur1.executeForm(formRobo);
	formRobo.beSigned(Bur1);
	Bur1.signForm(formRobo);
}