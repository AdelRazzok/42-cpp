/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:49:13 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/16 17:38:31 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  marcelus("Marcelus", 1);
    Bureaucrat  john("John", 75);
    Bureaucrat  bob("Bob", 150);

    std::cout << marcelus << std::endl;
    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << std::endl;

    Form        b12("B12", 74, 15);

    std::cout << b12 << std::endl;
    std::cout << std::endl;

    bob.signForm(b12);
    john.signForm(b12);
    marcelus.signForm(b12);

    std::cout << std::endl;    
    std::cout << b12 << std::endl;

    return 0; 
}
