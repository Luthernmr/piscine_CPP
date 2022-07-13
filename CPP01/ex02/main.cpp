/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:17:00 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/16 17:11:20 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	
	
	
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR= &str;
	std::string &stringREF = str;
	
	std::cout << "Memory addres : " << &str << std::endl;
	std::cout << "Memory addres : " << stringPTR << std::endl;
	std::cout << "Memory addres : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value : " << str << std::endl;
	std::cout << "Value : " << *stringPTR << std::endl;
	std::cout << "Value : " << stringREF << std::endl;
	
}