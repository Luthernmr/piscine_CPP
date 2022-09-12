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
	std::cout << "\nex01 test :\n" << std::endl;
	Cat chat;

	for (size_t i = 0; i < 2; i++)
	{
		chat.getBrain()->ideas[i] = "prout";
		std::cout << "idea :" << chat.getBrain()->ideas[i] <<std::endl;
	}
	
	Cat chat2 = chat;
	for (size_t i = 0; i < 2; i++)
		std::cout << "idea :" << chat2.getBrain()->ideas[i] <<std::endl;
	chat2.getBrain()->ideas[2] = "zut";
	std::cout << "chat 2 idea :" << chat2.getBrain()->ideas[2] <<std::endl;
	std::cout << "chat idea :" << chat.getBrain()->ideas[2] <<std::endl;


}