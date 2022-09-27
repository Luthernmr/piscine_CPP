/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:00:22 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/23 10:00:22 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "Constructor ScavTrap called " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor ScavTrap called " << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj._Name)
{
	*this = obj;
	std::cout << "Constructor Copy ScavTrap called " << std::endl;
}
ScavTrap & ScavTrap::operator=(const ScavTrap &obj)
{
	this->_Attack = obj._Attack;
	this->_Energy = obj._Energy;
	this->_Hit = obj._Hit;
	this->_Name = obj._Name;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (_Energy >= 1 && _Hit >=1)
	{
		std::cout << _Name << " The Scav Attack " << target << " causing " << _Attack << " poit of danage" << std::endl;
		_Energy -= 1;
	}
	else
	{
		std::cout << _Name << "The Scav is actually dead or no Energy to do something" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << _Name << " The  ScavTrap has entered Gate keeper mode " << std::endl;
}
