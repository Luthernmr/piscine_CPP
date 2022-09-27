/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:41:57 by lnemor            #+#    #+#             */
/*   Updated: 2022/08/30 16:41:57 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class  WrongCat : public WrongAnimal
{
	public:
		 WrongCat(const  WrongCat &obj);
		 WrongCat();
		~WrongCat();

		void makeSound(void) const;
		 WrongCat &operator=(const  WrongCat &obj);
};



