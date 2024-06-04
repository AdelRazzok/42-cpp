/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:57:21 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/04 18:30:32 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void    print(int &value)
{
    std::cout << value << std::endl;
}

void    multiply(int &value)
{
    value *= 2;
}

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};

    std::cout << "Array: " << std::endl;
    iter(array, 5, print);
    iter(array, 5, multiply);
    std::cout << "Array after multiply: " << std::endl;
    iter(array, 5, print);
    return 0;    
}
