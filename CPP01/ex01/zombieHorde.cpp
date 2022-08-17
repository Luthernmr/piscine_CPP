/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:54:15 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/16 16:15:45 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++){ 
		horde[i].SetName(name + std::to_string(i)); // concat to test;
		horde[i].annouce();
	}
	return (horde);
}