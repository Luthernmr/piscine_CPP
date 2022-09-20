/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:48:26 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/01 13:48:26 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) :
	_name(name),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{
	std::cout << "Constructor Form Called" << std::endl;
	try
	{
		if (this->_gradeToExec > 150 || this->_gradeToSign > 150)
			throw Form::GradeTooHighException();
		else if (this->_gradeToExec < 1 || this->_gradeToSign < 1)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	this->_isSigned = false;
}


Form::~Form()
{
	std::cout << "Deconstructor Form Called" << std::endl;
}

Form & Form::operator=(const Form &obj)
{
	this->_isSigned = obj._isSigned;
	return (*this);
}

/**accesseur**/

const std::string Form::getName() const
{
	return(this->_name);
}
bool	Form::getSign() const
{
	return (this->_isSigned);
}

int Form::getGradeToSign() const
{
	return(this->_gradeToSign);
}

int Form::getGradeToExec() const
{
	return(this->_gradeToExec);
}

Form::Form(const Form &obj) :
	_name(obj.getName()),
	_gradeToSign(obj.getGradeToSign()),
	_gradeToExec(obj.getGradeToExec())
{
	this->_isSigned = false;
	std::cout << "Copy Constructor Form Called" << std::endl;
	*this = obj;
}

void Form::beSigned(Bureaucrat &brc)
{
	try
	{
		if (brc.getGrade() < 1)
			throw Form::GradeTooHighException();
		else if (brc.getGrade() > 150)
			throw Form::GradeTooLowException();
		else if (brc.getGrade() <= this->getGradeToSign())
			this->_isSigned = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

std::ostream & operator<<(std::ostream &outfile, Form &obj)
{
	outfile << "name : " << obj.getName() << std::endl;
	outfile << "gradeSign : " << obj.getGradeToSign() << std::endl;
	outfile << "gradeExec : " << obj.getGradeToExec() << std::endl;
	outfile << "Signed : " << obj.getSign() << std::endl;
	return (outfile);
}