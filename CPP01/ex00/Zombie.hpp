/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:18:06 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/13 18:33:01 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
	
	private:
		std::string _name;
	
	public:

		void announce(void);
		
		Zombie(std::string name);
		~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );