/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:13:21 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/19 16:12:40 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* animal = new Animal();
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();

        std::cout << dog->getType() << std::endl;
        std::cout << cat->getType() << std::endl;
        cat->makeSound();
        dog->makeSound();
        animal->makeSound();

        delete animal;
        delete cat;
        delete dog;
    }
    std::cout << "---------------------" << std::endl;
    {
        const WrongAnimal* animal = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();

        std::cout << cat->getType() << std::endl;
        cat->makeSound();
        animal->makeSound();

        delete animal;
        delete cat;
    }

    return 0;
}
