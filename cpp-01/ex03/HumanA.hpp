/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:16:50 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/29 15:07:06 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA {
    private:
        std::string name;
        Weapon      &weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);

        void attack(void);
};

#endif
