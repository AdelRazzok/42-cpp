/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:16:50 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/28 16:48:26 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA {
    private:
        Weapon      weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA(void);
        void attack(void);
};

#endif
