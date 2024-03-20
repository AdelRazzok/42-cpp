/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:11:36 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 13:20:23 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
