/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:17:03 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/29 15:06:28 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
    return;
}

HumanA::~HumanA(void) {
    return;
}

void HumanA::attack(void) {
    std::cout << this->name << " attacks with their ";
    std::cout << this->weapon.getType() << std::endl;
    return;
}
