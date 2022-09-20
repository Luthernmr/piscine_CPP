/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:35:15 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/16 15:39:35 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int    main(void)
{
    Zombie* walker;

	Zombie* FooZombie;

	FooZombie = newZombie("Foo");
	FooZombie->announce();
    walker = newZombie("Alice");
    walker->announce();
    randomChump("Bob");
	randomChump("Foo");
    delete walker;
	delete FooZombie;
    return (0);
}