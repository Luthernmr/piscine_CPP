/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:19:35 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/13 16:59:51 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"


void Contact::SetId(int i){
	this->_id = i;
}
void Contact::SetFirstName(std::string s){
	this->_first_name = s;
}
void Contact::SetLastName(std::string s){
	this->_last_name = s;
}
void Contact::SetNickName(std::string s){
	this->_nickname = s;
}
void Contact::SetPhoneNumber(std::string s){
	this->_phone_number = s;
}
void Contact::SetDarkestSecret(std::string s){
	this->_darkest_secret = s;
}


int Contact::GetId() const{
	return(this->_id);	
}
std::string Contact::GetFirstName() const{
	return(this->_first_name);	
}
std::string Contact::GetLastName() const{
	return(this->_last_name);
}
std::string Contact::GetNickName() const{
	return(this->_nickname);	
}
std::string Contact::GetPhoneNumber() const{
	return(this->_phone_number);	
}
std::string Contact::GetDarkestSecret() const{
	return(this->_darkest_secret);	
}

Contact::Contact(void){
	this->SetId(0);
	std::cout << "constructeur Contact called" << std::endl;
	return;
}

Contact::~Contact(void){
	std::cout << "Destructeur Contact called" << std::endl;
	return;
}