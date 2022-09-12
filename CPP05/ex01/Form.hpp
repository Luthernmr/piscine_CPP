/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:33:42 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/01 13:33:42 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;
	public:
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		~Form();
		
		Form(const Form &obj);
		
		Form	&operator=(const Form &obj);
		void 	operator<<(const Form &obj);

		const std::string	getName() const;
		bool				getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		void		beSigned(Bureaucrat *brc);
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade too high");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Grade too Low");
			}
	};
};

std::ostream & operator<<(std::ostream &outfile, Form &obj);