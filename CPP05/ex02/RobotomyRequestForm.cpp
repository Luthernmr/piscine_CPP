/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:15:43 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/20 16:21:39 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) 
{
    std::cout << "Copy Constructor RobotomyRequestForm called" << std::endl;
    *this = obj;
};

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	(void)obj;
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Deconstructor RobotomyRequestForm called" << std::endl;
};