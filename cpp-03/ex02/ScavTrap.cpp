/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:45:00 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 12:15:25 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**
 * Constructors / Destructor
*/

ScavTrap::ScavTrap(void) : ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    this->is_gate_keeper_mode = false;
    return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap name constructor called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    this->is_gate_keeper_mode = false;
    return;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->is_gate_keeper_mode = src.is_gate_keeper_mode;
    return;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

/**
 * Operators overloads
*/

ScavTrap    &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
        this->is_gate_keeper_mode = other.is_gate_keeper_mode;
    }
    return *this;
}

/**
 * Public functions
*/

void        ScavTrap::attack(const std::string &target) {
    if (this->energy_points > 0 && this->hit_points > 0) {
        std::cout << "ScavTrap " << this->name;
        std::cout << " attacks " << target;
        std::cout << " causing " << this->attack_damage << " points of damage!";
        std::cout << std::endl;
    } else {
        std::cout << "ScavTrap " << this->name << " cannot attack" << std::endl;
    }
    return;
}

void        ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->name;
    if (is_gate_keeper_mode) {
        std::cout << " is guarding the gate";
    } else {
        std::cout << " is not guarding the gate";
    }
    std::cout << std::endl;
}
