/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:37:48 by lnemor            #+#    #+#             */
/*   Updated: 2022/07/20 11:37:48 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_stock_float_fixe = 0;
}


Fixed::Fixed(int const nb_int)
{
	std::cout << "Fixed Int constructor called" << std::endl;
	_stock_float_fixe = nb_int << _stock_bits;
}

Fixed::Fixed(float const nb_float)
{
	std::cout << "Fixed Float constructor called" << std::endl;
	_stock_float_fixe =  (int)roundf(nb_float * (1 << _stock_bits));
}

Fixed::Fixed(const Fixed &Fixed_copy)
{
	std::cout << "copy constructor called" << std::endl;
	_stock_float_fixe = Fixed_copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "deconstructor caled" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBit function called" << std::endl;
	return(_stock_float_fixe);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBit function called" << std::endl;
	_stock_float_fixe = raw;
}
void Fixed::operator=(const Fixed &Fixed_copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_stock_float_fixe = Fixed_copy.getRawBits();
}

float Fixed::toFloat(void) const
{
	return ((_stock_float_fixe / (float)(1 << _stock_bits)));
}

int Fixed::toInt(void) const
{
	return (_stock_float_fixe >> _stock_bits);
}

std::ostream & operator << (std::ostream &outfile, Fixed const &Fixed_copy)
{
	outfile <<  Fixed_copy.toFloat();
	return (outfile);
}