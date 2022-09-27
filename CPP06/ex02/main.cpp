/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:19:38 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/27 15:13:16 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"
#include <cstdlib>
#include <unistd.h>
#include <iostream>
Base *generate(void)
{
	srand(time(0));
	int intR = (rand() % 3);
	if (intR == 0)
		return (new A());
	else if (intR == 1)
		return (new B());
	else if (intR == 2)
		return (new C());
	else
		throw std::exception();
}

void identify(Base *p)
{
	if (A* tmp = dynamic_cast<A*>(p))
		std::cout << "A";
	else if (B* tmp = dynamic_cast<B*>(p))
		std::cout << "B";
	else if (C* tmp = dynamic_cast<C*>(p))
		std::cout << "C";
	else
		throw std::exception();
}

void identify(Base &p)
{
	try
	{
		A &tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "A\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B &tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "B\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C &tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "C\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
int main()
{
	try
	{
		std::cout << "identify * \n";
		for (size_t i = 0; i < 2; i++)
		{
			Base *test = generate();
			identify(test);
			usleep(1000000);
			delete test;
		}
		std::cout << "\n\n";
		std::cout << "identify & \n";
		for (size_t i = 0; i < 2; i++)
		{
			Base *ref = generate();
			identify(*ref);
			usleep(1000000);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}