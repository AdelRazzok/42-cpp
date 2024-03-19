/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:45:41 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 12:14:05 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");

    clapTrap.attack("Enemy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);

    scavTrap.attack("Enemy");
    scavTrap.takeDamage(20);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    return 0;
}
