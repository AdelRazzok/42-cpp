/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:57:11 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 12:34:51 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog &other);
        virtual ~Dog();

        Dog &operator=(const Dog &other);

        virtual std::string getType() const;
        virtual void        makeSound() const;
        Brain               *getBrain() const;
        void                compare(const Dog &other) const;
};
