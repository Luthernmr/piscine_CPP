/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:38:16 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 16:38:16 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected :
		std::string type;
	
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		virtual ~WrongAnimal();
		
		void makeSound(void) const;
		std::string getType() const;
		WrongAnimal &operator=(const WrongAnimal &obj);
};