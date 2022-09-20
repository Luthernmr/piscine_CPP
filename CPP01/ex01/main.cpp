/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 19:04:42 by lnemor            #+#    #+#             */
/*   Updated: 2022/05/16 16:11:09 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int    main(void)
{
    Zombie*    neganWalkers;
    Zombie*    rickWalkers;
    int        i;
    int        saviorsAmount;
    int        survivorsAmount;

    i = 0;
    saviorsAmount = 4;
    survivorsAmount = 6;
    neganWalkers = zombieHorde(saviorsAmount, "Savior");
    rickWalkers = zombieHorde(survivorsAmount, "Survivor");
    while (i < saviorsAmount)
        neganWalkers[i++].announce();
    i = 0;
    while (i < survivorsAmount)
        rickWalkers[i++].announce();
    delete []neganWalkers;
    delete []rickWalkers;

    return (0);
}