/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:17:03 by arazzok           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/03/19 12:46:28 by arazzok          ###   ########.fr       */
=======
/*   Updated: 2024/02/29 02:06:50 by arazzok          ###   ########.fr       */
>>>>>>> b4a0a20... date
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
