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

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */ 

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
		std::string 		_target;

	public:
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExec);
		~Form();
		
		Form(const Form &obj);
		
		Form	&operator=(const Form &obj);

		const std::string	getName() const;
		bool				getSign() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		virtual void	doSomething() const = 0;
		void		beSigned(Bureaucrat &brc);
		void		setTarget(std::string target);
		std::string getTarget(void) const;

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