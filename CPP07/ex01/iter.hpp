/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:12:20 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/27 23:17:25 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>

template <typename T>
void iter(T *tab, size_t size, void (*function)(T&))
{
	for (size_t i = 0; i < size; i++)
		function(tab[i]);
}

template <typename T> void display(T &e)
{
	std::cout << e;
}

