/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:48:23 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/28 15:08:17 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);

        void        announce(void);
        std::string get_name(void);
        void        set_name(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
