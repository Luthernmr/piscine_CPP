/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:14:07 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/16 16:59:52 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::annouce(){
	if (this->_name.compare("Foo") != 0)
		std::cout << "<" << this->_name << ">: " << "BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name){
	this->_name = name;
}

Zombie::Zombie(){
	std::cout << "Constructor called " << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Deconstructor called " << this->_name << std::endl;
}