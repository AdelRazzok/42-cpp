/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:12:09 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 13:20:50 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
    return;
}

Cat::Cat(const Cat &src) : AAnimal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain(*src.brain);
    return;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
    return;
}

Cat         &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

std::string Cat::getType() const
{
    return this->type;
}

void        Cat::makeSound() const
{
    std::cout << "Meow meow!" << std::endl;
    return;
}

Brain       *Cat::getBrain() const
{
    return this->brain;
}
