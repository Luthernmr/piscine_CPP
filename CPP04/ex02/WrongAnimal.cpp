/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:39:57 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 16:39:57 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << "Copy Construsctor WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	this->type = obj.type;
	return (*this);
}

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Construsctor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Deconstrusctor WrongAnimal called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "je suis un wrong animal" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}