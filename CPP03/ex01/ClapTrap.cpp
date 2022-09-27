/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:13:43 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/23 00:13:43 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit(10), _Energy(10), _Attack(0)
{
	std::cout << "Constructor Claptrap Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor Claptrap Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "Constructor Copy Claptrap Called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &obj)
{
	this->_Attack = obj._Attack;
	this->_Energy = obj._Energy;
	this->_Hit = obj._Hit;
	this->_Name = obj._Name;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_Energy >= 1 && _Hit >=1)
	{
		std::cout << _Name << " Attack " << target << " causing " << _Attack << " poit of danage" << std::endl;
		_Energy -= 1;
	}
	else
	{
		std::cout << _Name << " is actually dead or no Energy to do something" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_Hit >=1)
	{
		std::cout << _Name << " took " << amount << " damage point" << std::endl;;
		_Hit -= amount;
	}
	else
	{
		std::cout << _Name << " is actually dead" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy >= 1 && _Hit >=1)
	{
		std::cout << _Name << " be repaired of " << amount << " hit point " << std::endl;
		_Hit += amount;
		_Energy -= 1;
	}
	else
	{
		std::cout << _Name << " is actually dead or no Energy to do something " << std::endl;
	}
}