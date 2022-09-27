/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:48:34 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/26 18:18:55 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <cstdint>
#include <iostream>

typedef struct Data
{
	std::string nickname;
}Data;

uintptr_t serialize (Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
int main()
{
	Data Brad;
	uintptr_t pit;
	Data *Bob;

	Brad.nickname = "Jackeson";
	pit = serialize(&Brad);
	Bob = deserialize(pit);
	std::cout << "Brad add : " << &Brad << "\n";
	std::cout << "pit add : " << &pit << "\n";
	std::cout << "Bob add : " << Bob << "\n";
	std::cout << "Bob nickname : " << Bob->nickname << "\n";
	std::cout << "Brad nickname : " << Brad.nickname << "\n";
}