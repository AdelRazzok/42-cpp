/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:57:11 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 13:20:37 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
