/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:37:52 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 12:48:04 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "Big brain time!";
    return;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
    return;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
    return;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i] + " (dup)";
    }
    return *this;
}

std::string *Brain::getIdeas()
{
    return this->ideas;
}
