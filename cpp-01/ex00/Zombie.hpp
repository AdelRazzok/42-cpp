/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:04:49 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/26 18:42:46 by arazzok          ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie(void);

        void    announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif
