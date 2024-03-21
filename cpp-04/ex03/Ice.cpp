/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:40:39 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/21 12:58:58 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
    return;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice copy constructor called" << std::endl;
    return;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
    return;
}

Ice         &Ice::operator=(const Ice &other)
{
    std::cout << "Ice assignation operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

AMateria    *Ice::clone() const
{
    return new Ice(*this);
}

void        Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return;
}
