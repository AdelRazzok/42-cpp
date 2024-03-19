/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:48:00 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/28 15:09:45 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    return;
}

Zombie::Zombie(std::string name) {
    this->name = name;
    return;
}

Zombie::~Zombie(void) {
    std::cout << this->name << " destroyed" << std::endl;
    return;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

std::string Zombie::get_name(void) {
    return this->name;
}

void        Zombie::set_name(std::string name) {
    this->name = name;
    return;
}
