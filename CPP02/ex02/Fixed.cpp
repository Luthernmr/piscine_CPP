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

/************Constructor/Deconstructor************/

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

/************Getter/Setterr************/

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

/************Surcharge Operator************/

Fixed & Fixed::operator = (const Fixed &E_obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_stock_float_fixe = E_obj.getRawBits();
	return (*this);
}

int Fixed::operator > (const Fixed &E_obj) const
{
	if (_stock_float_fixe > E_obj.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator < (const Fixed &E_obj) const
{
	if (_stock_float_fixe < E_obj.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator >= (const Fixed &E_obj) const
{
	if (_stock_float_fixe >= E_obj.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator <= (const Fixed &E_obj) const
{
	if (_stock_float_fixe <= E_obj.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator == (const Fixed &E_obj) const
{
	if (_stock_float_fixe == E_obj.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator != (const Fixed &E_obj) const
{
	if (_stock_float_fixe != E_obj.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator + (const Fixed &E_obj) const
{
	Fixed newF;
	newF.setRawBits(_stock_float_fixe + E_obj.getRawBits());
	return (newF);
}

Fixed Fixed::operator - (const Fixed &E_obj) const
{
	Fixed newF;
	newF.setRawBits(_stock_float_fixe - E_obj.getRawBits());
	return (newF);
}

Fixed Fixed::operator * (const Fixed &E_obj) const
{
	Fixed newF;
	newF.setRawBits((_stock_float_fixe * E_obj.getRawBits()) >> _stock_bits);
	return (newF);
}

Fixed Fixed::operator / (const Fixed &E_obj) const
{
	Fixed newF;
	newF.setRawBits((_stock_float_fixe / E_obj.getRawBits()) << _stock_bits);
	return (newF);
}

Fixed Fixed::operator ++ (void) // postfix , incremet apres x++
{
	_stock_float_fixe++;
	return(*this);
}

Fixed Fixed::operator ++ (int)  // sufix , incremet avant ++x
{
	Fixed newF(*this);
	_stock_float_fixe++;
 	return(newF);
}

Fixed Fixed::operator -- (void) // postfix , incremet apres x--
{
	_stock_float_fixe--;
	return(*this);
}

Fixed Fixed::operator -- (int) // sufix , incremet avant --x
{
	Fixed newF(*this);
	_stock_float_fixe--;
 	return(newF);
}

/************Conversion************/

float Fixed::toFloat(void) const
{
	return ((_stock_float_fixe / (float)(1 << _stock_bits)));
}

int Fixed::toInt(void) const
{
	return (_stock_float_fixe >> _stock_bits);
}

/************Ooutfile operator************/

std::ostream & operator << (std::ostream &outfile, Fixed const &E_obj)
{
	outfile <<  E_obj.toFloat();
	return (outfile);
}

/************Compare function************/

Fixed & Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1.operator<(nb2))
		return(nb1);
	return(nb2);
}

const Fixed & Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1.operator<(nb2))
		return(nb1);
	return(nb2);
}

Fixed & Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1.operator>(nb2))
		return(nb1);
	return(nb2);
}

const Fixed & Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1.operator>(nb2))
		return(nb1);
	return(nb2);
}
