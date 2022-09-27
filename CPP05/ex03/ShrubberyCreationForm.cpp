/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:49:33 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/20 21:29:05 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
{
	this->setTarget(target);
    std::cout << "Constructor ShrubberyCreationForm called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form("ShrubberyCreation", 145, 137)
{
	this->setTarget(obj.getTarget());
    std::cout << "Copy Constructor ShrubberyCreationForm called" << std::endl;
};

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) 
{
	this->setTarget(obj.getTarget());
	return (*this);
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Deconstructor ShrubberyCreationForm called" << std::endl;
};



void ShrubberyCreationForm::doSomething() const
{
	std::ofstream outfile;
	
outfile.open((this->getTarget() + "_shrubbery").c_str(),  std::ios_base::app);
outfile << "	             ." << std::endl;
outfile << "          \\  :  / " << std::endl;
outfile << "           ' _ '" << std::endl;
outfile << "       -= ( (_) ) =-" << std::endl;
outfile << "           .   ." << std::endl;
outfile << "          /  :  \\" << std::endl;
outfile << "      .-.    \'" << std::endl;
outfile << "      |.|" << std::endl;
outfile << "    /)|`|(\\" << std::endl;
outfile << "   (.(|'|)`)" << std::endl;
outfile << "~~~~`\\`'./'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
outfile << "      |.|           ~~" << std::endl;
outfile << "      |`|                            ~~" << std::endl;
outfile << "     ,|\'|.      (_)          ~~" << std::endl;
outfile << "      \"\'\"        \\\"\\" << std::endl;
outfile << "           ~~     ^~^" << std::endl;
}