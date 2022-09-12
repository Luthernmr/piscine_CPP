/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:56:45 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 13:56:45 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(const Dog &obj) : Animal()
{
	*this = obj;
	std::cout << "Copy Construsctor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	return (*this);
}

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Construsctor Dog called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Deconstrusctor Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouaf" << std::endl;
}
