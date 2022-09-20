/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:14:07 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/13 18:41:56 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(){
	if (this->_name.compare("Foo") != 0)
		std::cout << "<" << this->_name << ">: " << "BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << "Constructor called " << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Deconstructor called " << this->_name << std::endl;
}