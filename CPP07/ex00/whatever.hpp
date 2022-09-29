/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:05:09 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/28 16:05:09 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


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
