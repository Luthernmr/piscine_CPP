/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorphisme.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:44:48 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/23 16:44:48 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
	virtual	void makeSound();
	
};

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		void makeSound();
};

class Cat : public Animal
{
	public:
		void makeSound();
		Cat();
		~Cat();
};

