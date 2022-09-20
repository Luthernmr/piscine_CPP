/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:43:40 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 16:43:40 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat & WrongCat::operator=(const  WrongCat &obj)
{
	this->type = obj.type;
	return (*this);
}

 WrongCat:: WrongCat()
{
	this->type = " WrongCat";
	std::cout << "Construsctor called" << std::endl;
}

 WrongCat:: WrongCat(const  WrongCat &obj) : WrongAnimal()// il préfere les déclarations explicite de constructeur parent
{
	std::cout << "Copy Construsctor called" << std::endl;
	*this = obj;
}
 WrongCat::~WrongCat()
{
	std::cout << "Deconstrusctor called" << std::endl;
}

void  WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou" << std::endl;
}
