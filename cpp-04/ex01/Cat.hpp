/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:11:36 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 12:34:44 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
        virtual ~Cat();

        Cat &operator=(const Cat &other);

        virtual std::string getType() const;
        virtual void        makeSound() const;
        Brain               *getBrain() const;
        void                compare(const Cat &other) const;
};
