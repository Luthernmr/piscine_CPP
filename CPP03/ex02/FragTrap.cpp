/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:30:49 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/23 12:30:49 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	setHit(100);
	setEnergy(100);
	setAttack(30);
	std::cout << "Constructor FragTrap called " << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor FragTrap called " << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::string s;
	std::cout << " Do you want HighFive ? ask with Y for YES or N for NOT" << std::endl;
	std::cout << "WRITE Y or N :";
	while (std::cin)
	{
		std::getline(std::cin, s);
		if (s.compare("Y") == 0)
		{
			std::cout << "⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠀⠀⠘⣷⣤⡀⠀⠀⠀⠀⣰⣿⡄⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣦⡀⢀⣼⣿⣿⣧⠀⠀⢀⣠⣶⣿⡿⠀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⣀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣾⣿⣿⣿⣿⣦⣾⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠈⠻⣿⣿⣶⣶⣶⣬⣿⣿⣿⠀⢸⣿⣿⡏⠀⣸⣿⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⠀⢸⣿⡿⠀⢰⣿⣿⠟⠉⣿⣿⣷⣶⣶⡶⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⠀⠸⣿⠁⢀⣿⡿⠃⢠⣾⣿⣿⣿⣿⡟⠁⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⢀⣤⣾⣷⡀⠈⠻⣇⠀⠀⠀⠀⠘⠟⠁⣴⣿⡿⠟⢿⣿⠏⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⢀⣴⣿⣿⣿⣿⣿⣆⠀⠉⠀⠀⠀⠀⠀⠀⠀⠛⠋⣀⣴⣾⣿⣆⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠙⠛⠛⠿⠿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣷⡀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣷⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⠛⠛⠛⠛⠻⠿⠿⠦⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠇⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠀⠛⠛⠉⠉⠀⠀⠀⠀⠀⢸⡿⠛⢿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡞⠁⠀⠀⠙⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl;
			std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
			break;
		}
		else if (s.compare("N") == 0)
		{
			std::cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡤⠖⠚⠉⠁⠀⠀⠉⠙⠒⢄⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⠀⠀⢀⠔⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢢⡀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢇⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡄"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⢸⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠇⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀⢀⣴⣶⡄⠀⠀⠀⠀⠀⢀⣶⡆⠀⢠⠇"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⠀⣣⠀⠀⠀⠀⠀⠀⠀⠙⠛⠁⠀⠀⠀⠀⠀⠈⠛⠁⡰⠃⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⢠⠞⠋⢳⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠜⠁⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⣰⠋⠀⠀⠀⢷⠙⠲⢤⣀⡀⠀⠀⠀⠀⠴⠴⣆⠴⠚⠁⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⣰⠃⠀⠀⠀⠀⠘⡇⠀⣀⣀⡉⠙⠒⠒⠒⡎⠉⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⢠⠃⠀⠀⢶⠀⠀⠀⢳⠋⠁⠀⠙⢳⡠⠖⠚⠑⠲⡀⠀⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⡎⠀⠀⠀⠘⣆⠀⠀⠈⢧⣀⣠⠔⡺⣧⠀⡴⡖⠦⠟⢣⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⢸⠀⠀⠀⠀⠀⢈⡷⣄⡀⠀⠀⠀⠀⠉⢹⣾⠁⠁⠀⣠⠎⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠈⠀⠀⠀⠀⠀⡼⠆⠀⠉⢉⡝⠓⠦⠤⢾⠈⠓⠖⠚⢹⠀⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⢰⡀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠀⠀⠀⢸⠀⠀⠀⠀⡏⠀⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⠳⡀⠀⠀⠀⠀⠀⠀⣀⢾⠀⠀⠀⠀⣾⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⠈⠐⠢⠤⠤⠔⠚⠁⠘⣆⠀⠀⢠⠋⢧⣀⣀⡼⠀⠀⠀⠀⠀⠀⠀⠀"<< std::endl; 
			std::cout << " ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠈⠁⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀"<< std::endl; 
			break;
		} 
		else 
			std::cout << "only Y or N is availible :";
	}
}