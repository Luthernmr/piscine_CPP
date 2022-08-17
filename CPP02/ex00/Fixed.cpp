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
	this->stock_float = 0;
}

Fixed::Fixed(const Fixed &Fixed_copy)
{
	std::cout << "copy constructor called" << std::endl;
	this->stock_float = Fixed_copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "deconstructor caled" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBit function called" << std::endl;
	return(this->stock_float);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBit function called" << std::endl;
	this->stock_float = raw;
}
void Fixed::operator=(const Fixed &Fixed_copy)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->stock_float = Fixed_copy.getRawBits();
}