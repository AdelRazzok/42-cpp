/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:49:13 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/16 16:24:06 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat  jimmy("Jimmy", 0);
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat  jimmy("Jimmy", 151);
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << std::endl;

    Bureaucrat  marcelus("Marcelus", 1);
    Bureaucrat  john("John", 75);
    Bureaucrat  bob("Bob", 150);

    std::cout << marcelus << std::endl;
    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    std::cout << std::endl;

    try {
        marcelus.incrementGrade();
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        john.incrementGrade();
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        bob.decrementGrade();
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << marcelus << std::endl;
    std::cout << john << std::endl;
    std::cout << bob << std::endl;
    return 0;
}
