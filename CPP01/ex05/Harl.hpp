/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:11:41 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/15 20:11:41 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

using namespace std;

class Harl {
	public:
		void complain(std::string level);
		Harl();
		~Harl();

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
};