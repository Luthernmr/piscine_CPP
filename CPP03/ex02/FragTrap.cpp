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
	std::cout << "Constructor FragTrap called " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Deconstructor FragTrap called " << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj._Name)
{
	*this = obj;
	std::cout << "Constructor Copy FragTrap called " << std::endl;
}
FragTrap & FragTrap::operator=(const FragTrap &obj)
{
	this->_Attack = obj._Attack;
	this->_Energy = obj._Energy;
	this->_Hit = obj._Hit;
	this->_Name = obj._Name;
	return (*this);
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