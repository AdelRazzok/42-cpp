/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:36:49 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/21 13:44:33 by arazzok          ###   ########.fr       */
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
        for (int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            if (other.inventory[i])
                this->inventory[i] = other.inventory[i]->clone();
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
    if (!m)
    {
        std::cout << "Cannot equip NULL materia" << std::endl;
        return;
    }

    int i = 0;
    while (i < 4 && this->inventory[i] != 0)
        i++;

    if (i >= 4)
    {
        std::cout << this->name << "'s inventory is full" << std::endl;
        return;
    }
    this->inventory[i] = m;
    std::cout << this->name << " equipped " << m->getType() << " materia" << std::endl;
    return;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    if (!this->inventory[idx])
    {
        std::cout << this->name << " has no materia at index " << idx << std::endl;
        return;
    }
    std::cout << this->name << " unequipped ";
    std::cout << this->inventory[idx]->getType() << " materia" << std::endl;
    this->inventory[idx] = 0;
    return;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    if (!this->inventory[idx])
    {
        std::cout << this->name << " has no materia at index " << idx << std::endl;
        return;
    }
    this->inventory[idx]->use(target);
    return;
}
