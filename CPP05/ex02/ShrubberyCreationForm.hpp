/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:49:39 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/06 16:07:00 by lnemor           ###   ########lyon.fr   */
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

		void	createFile() const;
	    ShrubberyCreationForm & operator=(const ShrubberyCreationForm &obj);
};