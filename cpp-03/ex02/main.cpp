/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:45:41 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 13:36:51 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clapTrap;
    clapTrap.attack("Enemy");
    clapTrap.takeDamage(10);
    clapTrap.beRepaired(5);

    ScavTrap scavTrap("ScavTrap");
    scavTrap.attack("Enemy");
    scavTrap.takeDamage(20);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    FragTrap fragTrap("FragTrap");
    fragTrap.attack("Enemy");
    fragTrap.takeDamage(30);
    fragTrap.beRepaired(15);
    fragTrap.highFivesGuys();

    return 0;
}
