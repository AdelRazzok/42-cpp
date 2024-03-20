/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:51:49 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 11:51:11 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal default constructor called" << std::endl;
    return;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal type constructor called" << std::endl;
    return;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
    return;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
    return;
}

AAnimal      &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal assignation operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->type;
}

void        AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
    return;
}
