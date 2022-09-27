/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:49:39 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/20 21:28:29 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
	    ShrubberyCreationForm(std::string target);
	    ~ShrubberyCreationForm();
	    ShrubberyCreationForm(const ShrubberyCreationForm &obj);

		void	doSomething() const;
	    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &obj);
};