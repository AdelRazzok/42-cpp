/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:51:49 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 15:23:10 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
    return;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal name constructor called" << std::endl;
    return;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
    return;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
    return;
}

Animal      &Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void        Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
    return;
}
