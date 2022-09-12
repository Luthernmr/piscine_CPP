/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:52:17 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 13:52:17 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain *BrainCat;
	public:
		Cat(const Cat &obj);
		Cat();
		~Cat();

		void makeSound(void) const;
		Cat &operator=(const Cat &obj);
		Brain *getBrain();
};



