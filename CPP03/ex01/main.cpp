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

#include "ScavTrap.hpp"

int main( void )
{
	//ClapTrap player("luther");
	ScavTrap player2("nemor");

	//player.attack("ennemie");
	player2.attack("prout");
	player2.guardGate();
	player2.beRepaired(5);
	//player.takeDamage(2);
	//player.beRepaired(9);
}

