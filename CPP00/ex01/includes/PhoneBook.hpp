/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:47:25 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/13 16:59:33 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {
	
	public:
		
		
		PhoneBook(void);
		~PhoneBook(void);
		
		void add(int);
		void search();
		
	private:
		Contact contact[8];
};


#endif