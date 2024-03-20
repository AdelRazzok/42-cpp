/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:36:49 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 14:47:58 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
    this->name = "default";
    for (int i = 0; i < 4; i++)
        this->inventory[i] = 0;
    return;
}

Character::Character(const std::string &name) : name(name)
{
    std::cout << "Character name constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = 0;
    return;
}

Character::Character(const Character &other) : name(other.name)
{
    std::cout << "Character copy constructor called" << std::endl;
    return;
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    return;
}

Character &Character::operator=(const Character &other)
{
    std::cout << "Character assignation operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            this->inventory[i] = other.inventory[i];
        }
    }
    return *this;
}

const std::string &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            break;
        }
    }
    return;
}

void Character::unequip(int idx)
{
    // ! Possible leak here !
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = 0;
    return;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->inventory[idx])
        this->inventory[idx]->use(target);
    return;
}
