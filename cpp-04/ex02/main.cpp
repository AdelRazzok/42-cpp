/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:13:21 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 13:27:25 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int     main(void)
{
    // AAnimal animal; -> Error: cannot instantiate abstract class
    
    const AAnimal   *dog = new Dog();
    std::cout << "Type: " << dog->getType() << std::endl;
    dog->makeSound();
    delete dog;

    const AAnimal   *cat = new Cat();
    std::cout << "Type: " << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;
    return 0;
}
