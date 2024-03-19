/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:15:08 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/21 17:44:51 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string action;
    PhoneBook   phonebook;
    int         i = 0;

    std::cout << "| ----- PHONEBOOK ----- |" << std::endl;
    while (action.compare("EXIT")) {
        std::cout << std::endl << "Enter a command: ";
        std::cin >> action;

        if (action.compare("ADD") == 0) {
            phonebook.add(i);
            i = i < 7 ? i+1 : 0;
        }
        if (action.compare("SEARCH") == 0) {
            phonebook.search();
        }
        std::cout << std::endl;
    }
    std::cout << "| ----- SEE YOU ----- |" << std::endl;
    return (0);
}
