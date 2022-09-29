/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:53:39 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/29 21:46:54 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Mutanstack.hpp"

int main()
{
	std::stack<int> noIt;
	
	noIt.push(33);
	noIt.push(34);
	noIt.push(35);

	//stack<int>::iterator thenoit;

	MutantStack<int> test;
	test.push(1);
	test.push(2);
	test.push(3);
	test.push(4);
	test.push(5);
	
	MutantStack<int> test2(test);
	
	test2.push(51);
	test2.push(52);
	test2.push(53);
	test2.push(54);
	test2.push(55);
	
	std::cout << "test : " << test.top() << std::endl;
	std::cout << "test2 : " << test2.top() << std::endl;
	
	test.swap(test2);
	std::cout << "swap : "; 
	
	MutantStack<int>::iterator it;
	std::cout << "test : "; 
	for (it = test.begin(); it < test.end(); ++it)
		std::cout << "[" << *it << "]";
		
	std::cout << std::endl;
	
	std::cout << "test2 : "; 
	MutantStack<int>::iterator it2;
	for (it2 = test2.begin(); it2 < test2.end(); ++it2)
		std::cout << "[" << *it2 << "]";
}