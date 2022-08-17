/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:36:31 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/20 11:36:31 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

class Fixed
{
	private:
		int	_stock_float_fixe;
		const int static _stock_bits = 8;
	public:
		Fixed();
		Fixed(int const nb_int);
		Fixed(float const nb_float);
		Fixed(const Fixed &Fixed_copy);
		~Fixed();

		float toFloat(void) const;
		int	toInt(void) const;
		
		Fixed &operator = (const Fixed &E_obj);

		int operator > (const Fixed &E_obj) const;
		int operator < (const Fixed &E_obj) const;
		int operator >= (const Fixed &E_obj) const;
		int operator <= (const Fixed &E_obj) const;
		int operator == (const Fixed &E_obj) const;
		int operator != (const Fixed &E_obj) const;
												// Le (deuxième) constspécificateur garantit que l'appel de la méthode ne modifiera pas les membres de l'instance				
		Fixed operator + (const Fixed &E_obj) const;
		Fixed operator - (const Fixed &E_obj) const;
		Fixed operator * (const Fixed &E_obj) const;
		Fixed operator / (const Fixed &E_obj) const;

		Fixed operator ++ (int); // sufix , incremet avant ++x
		Fixed operator ++ (void); // postfix , increment apres x++
		Fixed operator -- (int); // sufix , incremet avant --x 
		Fixed operator -- (void); // postfix , incremet apres x--

		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		static Fixed &min(Fixed &nb1, Fixed &nb2);
		static Fixed &max(Fixed &nb1, Fixed &nb2);
		static const Fixed &min(const Fixed &nb1, const Fixed &nb2);
		static const Fixed &max(const Fixed &nb1, const Fixed &nb2);

};

std::ostream & operator << (std::ostream &outfile, Fixed const &Fixed_copy);

