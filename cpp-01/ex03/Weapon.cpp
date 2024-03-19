/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:17:52 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/29 14:16:10 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
    return;
}

Weapon::~Weapon(void) {
    return;
}

const std::string   &Weapon::getType(void) {
    const std::string &type = this->type;
    return type;
}

void                Weapon::setType(std::string type) {
    this->type = type;
    return;
}
