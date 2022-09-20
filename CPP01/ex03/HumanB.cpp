/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:07:59 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/17 16:23:49 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

void HumanB::attack(){
	if (_weapon != NULL)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their fist" << std::endl;

}

void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name, Weapon *weapon) :  _name(name) ,_weapon(weapon){
	
};

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cout << "Constructor HumanB called" << std::endl;
};

HumanB::~HumanB(){
	std::cout << "Destructor HumanB called" << std::endl;
}