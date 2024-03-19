/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:52:47 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/07 12:55:17 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
    std::cout << "Harl constructor called" << std::endl;
    return;
}

Harl::~Harl(void) {
    std::cout << "Harl destructor called" << std::endl;
    return;
}

void    Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*f[i])();
            return;
        }
    }
    std::cout << "Unknown level" << std::endl;
    return;
}

void    Harl::debug(void) {
    std::cout << "\033[1;32m";
    std::cout << "Debug: debugging...";
    std::cout << "\033[0m" << std::endl;
    return;
}

void    Harl::info(void) {
    std::cout << "\033[1;36m";
    std::cout << "Info: notice" << std::endl;
    std::cout << "\033[0m";
    return;
}

void    Harl::warning(void) {
    std::cout << "\033[1;33m";
    std::cout << "Warning: /!\\ " << std::endl;
    std::cout << "\033[0m";
    return;
}

void    Harl::error(void) {
    std::cout << "\033[1;31m";
    std::cout << "Error: fatal error" << std::endl;
    std::cout << "\033[0m";
    return;
}
