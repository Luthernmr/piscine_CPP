/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:49:40 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/21 15:23:07 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5)
{
	this->setTarget(target);	
    std::cout << "Constructor PresidentialPardonForm called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form("PresidentialPardon", 25, 5)
{
	this->setTarget(obj.getTarget());
    std::cout << "Copy Constructor PresidentialPardonForm called" << std::endl;
    *this = obj;
};

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	this->setTarget(obj.getTarget());
	return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Deconstructor PresidentialPardonForm called" << std::endl;
};

void PresidentialPardonForm::doSomething() const
{
	std::cout << this->getTarget() << "has been pardoned by Zafod beeblebrox" << std::endl;
}