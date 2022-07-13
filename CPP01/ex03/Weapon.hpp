/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:01:41 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/17 16:25:14 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {

	private :
		std::string _type;

	public :
		Weapon(std::string type);
		~Weapon();
		std::string getType(void) const;
		void setType(std::string);
};
