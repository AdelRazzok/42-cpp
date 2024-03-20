/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:13:21 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 12:52:37 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void    initAnimals(Animal *animals[], int size);
void    printAnimals(Animal *animals[], int size);
void    deleteAnimals(Animal *animals[], int size);

int     main(void)
{
    std::cout << "|---------- PART 1 ----------|" << std::endl;
    const int   SIZE = 4;
    Animal      *animals[SIZE];

    initAnimals(animals, SIZE);
    std::cout << std::endl;
    printAnimals(animals, SIZE);
    std::cout << std::endl;
    deleteAnimals(animals, SIZE);
    std::cout << std::endl;

    std::cout << "|---------- PART 2 ----------|" << std::endl;
    Dog     dog;
    Dog     dog2 = dog;

    std::cout << std::endl;
    dog.compare(dog2);
    std::cout << std::endl;
    return 0;
}

void    initAnimals(Animal *animals[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i < 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
}

void    printAnimals(Animal *animals[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Type: " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
}

void    deleteAnimals(Animal *animals[], int size)
{
    for (int i = 0; i < size; i++)
        delete animals[i];
}
