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

#include "FragTrap.hpp"

int main( void )
{
	ClapTrap player("luther");
	ScavTrap player2("nemor");
	FragTrap player3("gregoir");
	player.attack("ennemie");
	player2.attack("prout");
	player3.attack("enemie2");
	player3.takeDamage(8);
	std::cout << "HIT " <<player3.getHit() << std::endl;
	std::cout << "ENERGY "  << player3.getEnergy() << std::endl;
	std::cout << "ATTACK "<< player3.getAttack() << std::endl;
	player2.guardGate();
	player3.highFivesGuys();
	player2.beRepaired(5);
	player.takeDamage(2);
	player.beRepaired(9);
}

