/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:19:15 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/26 21:19:15 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " j " << std::endl;
	std::cout << i->getType() << " i " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal *beta = new WrongAnimal();
	const WrongAnimal *k = new WrongCat();

	std::cout << beta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound(); //will output the cat sound!
	beta->makeSound();

	delete beta;
	delete k;
}