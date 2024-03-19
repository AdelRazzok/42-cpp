/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:17:26 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/28 16:52:01 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    return;
}

HumanB::~HumanB(void) {
    return;
}

void HumanB::attack(void) {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
    return;
}

void HumanB::setWeapon(Weapon weapon) {
    this->weapon = weapon;
    return;
}
