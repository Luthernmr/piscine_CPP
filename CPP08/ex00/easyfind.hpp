/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor.student@42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:27:43 by lnemor            #+#    #+#             */
/*   Updated: 2022/09/29 16:42:24 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void easyfind(T &e, int nb)
{
	std::cout << "we are searching [" << nb << "] value" << std::endl;
	
	std::vector<int>::iterator it;
	it = std::find(e.begin(), e.end(), nb);
	if(it != e.end())
	{
		std::cout << "value " << *it << " found" << std::endl;
		return;
	}	
	else
		throw std::logic_error("value not exist");
}