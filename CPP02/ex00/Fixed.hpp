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
#include <string>

using namespace std;

class Fixed
{
	private:
		int	_stock_float;
		const int static _stock_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed *Fixed_copy);
		void operator=(const Fixed &Fixed_copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

