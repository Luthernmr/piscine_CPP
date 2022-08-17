/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphisme.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:44:34 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/23 16:44:34 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorphisme.hpp"

Dog::Animal()
{
	std::cout << "Constructor Animal called" << std::cout;
}

Animal::~Animal()
{
	std::cout << "Deconstructor Animal called" << std::cout;
}

Dog::Dog()
{
	std::cout << "Constructor Dog called" << std::cout;
}

Dog::~Dog()
{
	std::cout << "Deconstructor Dog called" << std::cout;
}

Cat::Cat()
{
	std::cout << "Constructor Cat called" << std::cout;
}

Cat::~Cat()
{
	std::cout << "Deconstructor Cat called" << std::cout;
}

