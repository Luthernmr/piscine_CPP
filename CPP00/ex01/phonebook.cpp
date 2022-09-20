/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:07:12 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/13 16:56:46 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

void	PhoneBook::add( int i ) {
	
	std::string s;
	this->contact[i].SetId(i);
	while (std::cin)
	{
			std::cout << "First_name: ";
			std::getline (std::cin, s);
			if (s.length())
			{
				this->contact[i].SetFirstName(s);
				break;
			}
	}
	while (std::cin)
	{
			std::cout << "Last_name: ";
			std::getline (std::cin, s);
			if (s.length())
			{
				this->contact[i].SetLastName(s);
				break;
			}
	}
	while (std::cin)
	{
			std::cout << "Nickname: ";
			std::getline (std::cin, s);
			if (s.length())
			{
				this->contact[i].SetNickName(s);
				break;
			}
	}
	while (std::cin)
	{
			std::cout << "Phone Number: ";
			std::getline (std::cin, s);
			if (s.length())
			{
				this->contact[i].SetPhoneNumber(s);
				break;
			}
	}
	while (std::cin)
	{
			std::cout << "Darkest Secret: ";
			std::getline (std::cin, s);
			if (s.length())
			{
				this->contact[i].SetDarkestSecret(s);
				break;
			}
	}
}

void PhoneBook::search() {
	
	std::string s (44, '-');
	std::cout << std::setw(10) << "id" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << std::endl;
	std::cout << s;
	std::cout << std::endl;
	int	i = 0;
	while (i < 8 && this->contact[i].GetFirstName().length() > 0) {

		std::cout << std::setw(10) << this->contact[i].GetId() << "|";
		if (this->contact[i].GetFirstName().length() > 10)
			std::cout << this->contact[i].GetFirstName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contact[i].GetFirstName() << "|";
		
		if (this->contact[i].GetLastName().length() > 10)
			std::cout << this->contact[i].GetLastName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setfill(' ')<<std::setw(10) << this->contact[i].GetLastName() << "|";
		
		if (this->contact[i].GetNickName().length() > 10)
			std::cout << this->contact[i].GetNickName().substr(0, 9) << "." << "|";
		else
			std::cout << std::setw(10) << this->contact[i].GetNickName() << "|";
		std::cout << std::endl;
		i++;
	}
	if (i == 0)
	{
		std::cout << "No Contact set, Please ADD contact first" << std ::endl;
		return;
	}
	while (std::cin)
	{
		std::string s;
		std::cout << "SEARCH WITH ID: ";
		std::getline (std::cin, s);
		if (s.length() < 2 && (s[0] >= '0' && s[0] <= '7'))
		{
			int i = stoi(s);
			if (this->contact[i].GetFirstName().length() == 0)
			{
				std::cout << "Please enter valid ID" << std ::endl;
				continue;
			}
			std::cout << "id: " << this->contact[i].GetId() << std::endl;
			std::cout << "Firstname: " << this->contact[i].GetFirstName() << std::endl;
			std::cout << "Lastname: " << this->contact[i].GetLastName() << std::endl;
			std::cout << "Nickname: " << this->contact[i].GetNickName() << std::endl;
			std::cout << "PhoneNumber: " << this->contact[i].GetPhoneNumber() << std::endl;
			std::cout << "DarkestSecret: " << this->contact[i].GetDarkestSecret() << std::endl;
			break;
		}
		else
			std::cout << "please enter a valid id" << std ::endl;
	}
}

PhoneBook::PhoneBook(void){
	std::cout << "constructuer Phonebook called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructer Phonebook called" << std::endl;
	return;
}