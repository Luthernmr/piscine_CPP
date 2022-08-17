/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:20:24 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/17 16:20:42 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	
	public:
		void attack(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
	private:
		std::string _name;
		Weapon &_weapon;
};
