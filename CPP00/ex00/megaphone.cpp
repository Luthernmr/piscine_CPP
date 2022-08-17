/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:54:07 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/16 17:54:13 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1; 
	j = 0;
	if (argc == 1) 
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << (char) toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;

	}
}