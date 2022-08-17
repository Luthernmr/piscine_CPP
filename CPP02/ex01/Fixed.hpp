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
		int	toInt(void)const;
		void operator=(const Fixed &Fixed_copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream & operator << (std::ostream &outfile, Fixed const &Fixed_copy);

