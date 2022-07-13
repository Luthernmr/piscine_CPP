/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:08:51 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/17 16:24:56 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType() const{
	return (this->_type);
}

void Weapon::setType(std::string type){
	this->_type = type;
}

Weapon::Weapon(std::string type) : _type(type){
	std::cout << "Constructor Weapon called" << std::endl;
};

Weapon::~Weapon(){
	std::cout << "Destructor Weapon called" << std::endl;
};
