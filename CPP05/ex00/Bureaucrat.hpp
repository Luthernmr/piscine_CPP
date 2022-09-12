/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:13:47 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/31 22:13:47 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int 	_grade;
	public:
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
		const std::string getName();
		int	getGrade();
		Bureaucrat(const std::string name,int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &obj);
		void gradeUp();
		void gradeDown();
		void signForm();
		Bureaucrat &operator=(const Bureaucrat &obj);
};

std::ostream & operator<<(std::ostream &outfile, Bureaucrat &obj);