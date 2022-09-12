/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:33:16 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 13:33:16 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Copy Construsctor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
	this->type = obj.type;
	return (*this);
}

Animal::Animal() : type("Animal")
{
	std::cout << "Construsctor Animal called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Deconstrusctor Animal called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "jul le S" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}