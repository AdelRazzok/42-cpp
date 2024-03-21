/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:44:06 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/21 12:58:23 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
    return;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure copy constructor called" << std::endl;
    return;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
    return;
}

Cure         &Cure::operator=(const Cure &other)
{
    std::cout << "Cure assignation operator called" << std::endl;
    if (this != &other)
        AMateria::operator=(other);
    return *this;
}

AMateria    *Cure::clone() const
{
    return new Cure(*this);
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return;
}
