/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:04:36 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/26 19:12:53 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *z;

    z = newZombie("Roger");
    z->announce();
    delete z;
    randomChump("Bernard");
    return (0);
}
