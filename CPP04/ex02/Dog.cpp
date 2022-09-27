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


Dog &Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	this->BrainDog = new Brain(*obj.BrainDog);
	return (*this);
}

Dog::Dog()
{
	this->type = "Dog";
	this->BrainDog = new Brain();
	std::cout << "Construsctor Dog called" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal()// il préfere les déclarations explicite de constructeur parent
{
	std::cout << "Copy Construsctor Dog called" << std::endl;
	*this = obj;
}
Dog::~Dog()
{
	std::cout << "Deconstrusctor Dog called" << std::endl;
	delete this->BrainDog;
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}

Brain* Dog::getBrain()
{
	return(this->BrainDog);
}