/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:08:28 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/21 13:20:06 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
	this->setTarget(target);
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form("RobotomyRequest", 72, 45)
{
	this->setTarget(obj.getTarget());
    std::cout << "Copy Constructor RobotomyRequestForm called" << std::endl;
    *this = obj;
};

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	this->setTarget(obj.getTarget());
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Deconstructor RobotomyRequestForm called" << std::endl;
};

void RobotomyRequestForm::doSomething() const
{
	std::cout << "BzzzzzZZBzzZZZZZ" << std::endl;
	srand(time(NULL));
	if(rand() % 2 == 1)
		std::cout << this->getTarget() << " has been Robotomized SUCCESSFULLY" << std::endl;
	else 
		std::cout << "Operation Failed" << std::endl;
}