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
	std::cout << BOLDWHITE << "\nMAIN TEST :\n" << RESET << std::endl;
	const Animal *D = new Dog();
	const Animal *C = new Cat();
	Animal *animalTab[8];

	D->makeSound();
	C->makeSound();
	
	std::cout << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (i < 2)
		{
			animalTab[i] = new Dog();
			std::cout << RED << animalTab[i]->getType() << RESET << '\n';
			animalTab[i]->makeSound();
		}
		else
		{
			animalTab[i] =  new Cat();
			std::cout << RED << animalTab[i]->getType() << RESET << '\n';
			animalTab[i]->makeSound();
		}
	}
	std::cout << std::endl;
	delete D;
	delete C;
	for (int i = 0; i < 4; i ++)
		delete animalTab[i];
	std::cout << std::endl;

//Brain test
	
	std::cout << BOLDWHITE << "\nBRAIN TEST :\n" << RESET << std::endl;
	Cat chat;
	Dog chien;
	std::cout << std::endl;

	chien.makeSound();
	chat.makeSound();
	for (size_t i = 0; i <= 2; i++)
	{
		chat.getBrain()->ideas[i] = " prout";
		std::cout << MAGENTA << "\nidea chat has been set: " << chat.getBrain()->ideas[i] <<std::endl;
		chien.getBrain()->ideas[i] = " j'aime arnaud";
		std::cout << "idea dog has been set: " << chien.getBrain()->ideas[i] << RESET << std::endl;
		std::cout << std::endl;
	}
	
	std::cout << BOLDWHITE << "\nBRAIN TEST COPY :\n" << RESET << std::endl;

	Cat chat2 = chat;
	Dog chien2(chien);

	std::cout << std::endl;

	for (size_t i = 0; i <= 2; i++)
	{
		std::cout << GREEN << "idea " << i << " for copy chat: " << chat2.getBrain()->ideas[i] <<std::endl;
		std::cout << "idea " << i << " for copy chien: " << chien2.getBrain()->ideas[i] <<std::endl;
		std::cout << RESET << std::endl;
	}
	chat2.getBrain()->ideas[2] = "zut";
	std::cout << RED << "chat 2 idea  changed for copy: " << chat2.getBrain()->ideas[2] <<std::endl;
	std::cout << "chat idea :" << chat.getBrain()->ideas[2] <<std::endl;
	
	std::cout << std::endl;
	chien2.getBrain()->ideas[2] = "flut";
	std::cout <<"Chien 2 idea changed for copy : " << chien2.getBrain()->ideas[2] <<std::endl;
	std::cout << "Chien idea :" << chien.getBrain()->ideas[2] << RESET <<std::endl;

	std::cout << std::endl;

}