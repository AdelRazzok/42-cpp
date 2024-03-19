/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:48:37 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/28 15:17:39 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;
    int     size;

    size = 5;
    zombies = zombieHorde(size, "Kobe");
    for (int i = 0; i < size; i++) {
        zombies[i].announce();
    }
    delete [] zombies;
    return (0);
}
