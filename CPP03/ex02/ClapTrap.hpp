/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:56:44 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/22 23:56:44 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>

class ClapTrap
{
	protected :
		std::string  _Name;
		int	_Hit;
		int	_Energy;
		int	_Attack;

	public :
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap (const ClapTrap &obj);
		ClapTrap & operator=(const ClapTrap &obj);
		
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int	getHit();
		void setHit(int amount);

		int	getEnergy();
		void setEnergy(int amount);

		int	getAttack();
		void setAttack(int amount);
};
