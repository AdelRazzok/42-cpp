/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:13:43 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/14 13:30:35 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * Constructors / Destructor
*/

ClapTrap::ClapTrap(void) : name("ClapTrap"), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0) {
    std::cout << "Name constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

/**
 * Operators overloads
*/

ClapTrap    &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

/**
 * Public functions
*/

void        ClapTrap::attack(const std::string &target) {
    if (this->energy_points > 0 && this->hit_points > 0) {
        std::cout << "ClapTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << " causing " << this->attack_damage << " points of damage!";
        std::cout << std::endl;
    } else {
        std::cout << "ClapTrap " << this->name << " cannot attack" << std::endl;
    }
    return;
}

void        ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->name;
    std::cout << " loses " << amount << " health points!";
    std::cout << std::endl; 
    this->hit_points -= amount;
    return;
}

void        ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << this->name;
    std::cout << " recovers " << amount << " health points!";
    std::cout << std::endl; 
    this->hit_points += amount;
    return;
}
