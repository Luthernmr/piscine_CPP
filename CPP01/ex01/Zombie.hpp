/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:18:06 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/16 17:02:23 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {
	
	private:
		std::string _name;
	
	public:
		void SetName(std::string);
		void annouce(void);
		void randomChump( std::string name );
		Zombie(void);
		~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );