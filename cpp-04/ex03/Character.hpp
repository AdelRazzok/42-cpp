/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:26:14 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 14:37:47 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria    *inventory[4];
    public:
        Character();
        Character(const std::string &name);
        Character(const Character &other);
        virtual ~Character();

        Character &operator=(const Character &other);

        const std::string &getName() const;

        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter &target);
};
