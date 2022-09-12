/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:15:29 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 17:15:29 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	public :
		std::string ideas[100];
		Brain();
		~Brain();
		Brain(const Brain &obj);

		Brain &operator=(const Brain &obj);
		std::string *getIdeas();
};
