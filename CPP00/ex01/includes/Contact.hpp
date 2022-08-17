/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:27:11 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/13 16:54:53 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef Contact_HPP
# define Contact_HPP
#include <iostream>

class Contact {
	
	public:
		
		void SetId(int);
		void SetFirstName(std::string);
		void SetLastName(std::string);
		void SetNickName(std::string);
		void SetPhoneNumber(std::string);
		void SetDarkestSecret(std::string);
	
		int GetId(void) const;
		std::string GetFirstName(void) const;
		std::string GetLastName(void) const;
		std::string GetNickName(void) const;
		std::string GetPhoneNumber(void) const;
		std::string GetDarkestSecret(void) const;
		
		Contact(void);
		~Contact(void);	
		
	private:
		int _id;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif