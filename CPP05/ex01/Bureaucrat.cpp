/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:13:44 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/31 22:13:44 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name,int grade): _name(name), _grade(grade)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(GradeTooHighException())
	{
		std::cerr << GradeTooHighException().what() << '\n';
	}
	catch(GradeTooLowException())
	{
		std::cerr << GradeTooLowException().what() << '\n';
	} 
	std::cout << "Construcor Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Deconstrucor Bureaucrat called" << std::endl;
}
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->_grade = obj._grade;
	return (*this);
}
Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	std::cout << "Copy Construcor Bureaucrat called" << std::endl;
	*this = obj;
}

int Bureaucrat::getGrade()
{
	return (this->_grade);
}

const std::string Bureaucrat::getName()
{
	return (this->_name);
}

void Bureaucrat::gradeUp()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::gradeDown()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form *form)
{
	if (form->getSign() == true)
		std::cout << this->getName() << "signed" << form->getName() << std::endl;
}

std::ostream & operator<<(std::ostream &outfile, Bureaucrat &obj)
{
	outfile << obj.getName() << ", " << "Bureaucrat grade : " << obj.getGrade() << std::endl;
	return (outfile);
}
//Verier l'operator << 