/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:17:16 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/29 15:03:03 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB {
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void    attack(void);
        void    setWeapon(Weapon &weapon);
};

#endif
