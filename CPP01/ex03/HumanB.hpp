/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:04:40 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/17 16:19:43 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanB{
	
	private:
		std::string _name;
		Weapon *_weapon;
	
	public:
		HumanB(std::string name, Weapon *weapon);
		HumanB(std::string name);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon&);
};

