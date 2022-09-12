/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:30:59 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 13:30:59 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected :
		std::string type;
	
	public :
		Animal();
		Animal(const Animal &obj);
		virtual ~Animal();
		
		virtual void makeSound(void) const = 0;
		std::string getType() const;
		Animal &operator=(const Animal &obj);
};