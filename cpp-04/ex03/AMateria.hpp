/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:30:41 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/21 13:50:01 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(const std::string &type);
        AMateria(const AMateria &other);
        virtual ~AMateria();

        AMateria &operator=(const AMateria &other);

        const std::string &getType() const;

        virtual AMateria    *clone() const = 0;
        virtual void        use(ICharacter &target);
};
