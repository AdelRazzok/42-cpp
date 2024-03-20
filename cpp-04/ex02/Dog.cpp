/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:00:03 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 13:20:32 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
	return;
}

Dog::Dog(const Dog &src) : AAnimal(src)
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
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!" << std::endl;
	return;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}

void Dog::compare(const Dog &other) const
{
	if (this->brain == other.brain)
		std::cout << "\033[1;31mDog's brain is a shallow copy\033[0m" << std::endl;
	else
		std::cout << "\033[1;32mDog's brain is a deep copy\033[0m" << std::endl;

	std::cout << "Dog 1 brain address: " << this->brain << std::endl;
	std::cout << "Dog 2 brain address: " << other.brain << std::endl;

	std::cout << "Dog 1 ideas: " << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << this->brain->getIdeas()[i] << std::endl;
	
	std::cout << "Dog 2 ideas: " << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << other.brain->getIdeas()[i] << std::endl;

	return;
}
