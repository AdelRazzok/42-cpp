/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:36:04 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 15:04:12 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
    return;
}

AMateria::AMateria(const std::string &type) : type(type)
{
    std::cout << "AMateria type constructor called" << std::endl;
    return;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    return;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
    return;
}

AMateria            &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

const std::string   &AMateria::getType() const
{
    return this->type;
}

void                AMateria::use(ICharacter &target)
{
    if (this->type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return;
}
