/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:27:13 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/20 11:27:13 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap player("luther");

	player.attack("ennemie");
	player.takeDamage(2);
	player.takeDamage(2);
	//player.takeDamage(2);
	//player.takeDamage(2);
	//player.takeDamage(2);
	//player.takeDamage(2);
	player.beRepaired(9);
}

