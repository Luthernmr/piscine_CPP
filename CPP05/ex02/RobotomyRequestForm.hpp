/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:32:27 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/20 21:34:13 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
	    ~RobotomyRequestForm();
	    RobotomyRequestForm(const RobotomyRequestForm &obj);
	
		void doSomething() const;
	    RobotomyRequestForm & operator=(const RobotomyRequestForm &obj);
		
	private:

};