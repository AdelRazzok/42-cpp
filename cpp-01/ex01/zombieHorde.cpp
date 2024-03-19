/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:48:51 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/28 15:20:55 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
    Zombie *zombieHorde = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombieHorde[i].set_name(name);
    return zombieHorde;
}
