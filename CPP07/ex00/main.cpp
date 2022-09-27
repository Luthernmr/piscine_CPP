/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:12:11 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/27 15:24:35 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class T>
T max(T a, T b)
{
	if (a > b)
		return(a);
	else
		return(b);
}

template <class T>
T min(T a, T b)
{
	if (a < b)
		return(a);
	else
		return(b);
}

template <class T>
void swap(T & a, T & b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}