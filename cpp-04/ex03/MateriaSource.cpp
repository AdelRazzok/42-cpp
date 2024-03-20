/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:54:05 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 15:03:57 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = other;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (materias[i])
            delete materias[i];
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource assignation operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (materias[i])
                delete materias[i];
            materias[i] = other.materias[i];
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    
}

AMateria *MateriaSource::createMateria(std::string const &type)
{

}
