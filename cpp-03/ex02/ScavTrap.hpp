/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:01:06 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 13:54:11 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>

class ScavTrap : public ClapTrap {
    private:
        bool is_gate_keeper_mode;
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &src);
        virtual ~ScavTrap(void);

        ScavTrap    &operator=(const ScavTrap &other);

        void        attack(const std::string &target);
        void        guardGate(void);
};

#endif
