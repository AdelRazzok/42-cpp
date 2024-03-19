/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:00:03 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 17:00:26 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
    return;
}

Dog::Dog(const Dog &src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
    return;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
    return;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
    return;
}
