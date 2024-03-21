/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:54:05 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/21 14:03:51 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->materias[i] = 0;
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
        if (this->materias[i])
            delete this->materias[i];
    }
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "MateriaSource assignation operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materias[i])
                delete this->materias[i];
            this->materias[i] = other.materias[i];
        }
    }
    return *this;
}

void            MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;

    while (i < 4 && this->materias[i] != 0)
        i++;
    if (i >= 4)
    {
        std::cout << "Cannot learn more than 4 materias" << std::endl;
        return;
    }
    this->materias[i] = m;
    std::cout << "Materia " << m->getType() << " learned" << std::endl;
}

AMateria        *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;

    while (i < 4 && this->materias[i] && this->materias[i]->getType() != type)
        i++;

    if (i >= 4 || !this->materias[i])
    {
        std::cout << type << " materia doest not exist" << std::endl;
        return 0;
    }
    std::cout << "Materia " << type << " created" << std::endl;
    return this->materias[i]->clone();
}
