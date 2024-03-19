/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:05:26 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 12:28:57 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
    protected:
        std::string     name;
        unsigned int    hit_points;
        unsigned int    energy_points;
        unsigned int    attack_damage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        virtual ~ClapTrap(void);

        ClapTrap    &operator=(const ClapTrap &other);

        void        attack(const std::string &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif
