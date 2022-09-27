/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:52:17 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 13:52:17 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain *BrainDog;
	public:
		Dog(const Dog &obj);
		Dog();
		~Dog();

		void makeSound(void) const;
		Dog &operator=(const Dog &obj);
		Brain *getBrain();
};



