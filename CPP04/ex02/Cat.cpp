/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:56:45 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 13:56:45 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat &Cat::operator=(const Cat &obj)
{
	this->type = obj.type;
	return (*this);
}

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Construsctor Cat called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal()// il préfere les déclarations explicite de constructeur parent
{
	std::cout << "Copy Construsctor Cat called" << std::endl;
	*this = obj;
}
Cat::~Cat()
{
	std::cout << "Deconstrusctor Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
