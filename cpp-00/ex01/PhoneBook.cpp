/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:35:05 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/21 17:50:14 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

void PhoneBook::add(int index) {
    std::string first_name; 
    std::string last_name; 
    std::string nickname; 
    std::string phone_number; 
    std::string darkest_secret; 

    std::cout << std::endl << "| ----- ADD CONTACT ----- |" << std::endl;

    std::cout << "First name: ";
    std::cin >> first_name;
    if (first_name.empty()) {
        std::cout << "First name can't be empty" << std::endl;
        return;
    }
    this->_contacts[index].set_first_name(first_name);

    std::cout << "Last name: ";
    std::cin >> last_name;
    if (last_name.empty()) {
        std::cout << "Last name can't be empty" << std::endl;
        return;
    }
    this->_contacts[index].set_last_name(last_name);

    std::cout << "Nickname: ";
    std::cin >> nickname;
    if (nickname.empty()) {
        std::cout << "Nickname name can't be empty" << std::endl;
        return;
    }
    this->_contacts[index].set_nickname(nickname);

    std::cout << "Phone number: ";
    std::cin >> phone_number;
    if (phone_number.empty()) {
        std::cout << "Phone number can't be empty" << std::endl;
        return;
    }
    this->_contacts[index].set_phone_number(phone_number);

    std::cout << "Darkest secret: ";
    std::cin >> darkest_secret;
    if (darkest_secret.empty()) {
        std::cout << "Darkest secret can't be empty" << std::endl;
        return;
    }
    this->_contacts[index].set_darkest_secret(darkest_secret);

    std::cout << "User created on index " << index << std::endl;
    return;
}

void PhoneBook::search(void) {
    int index;

    std::cout << std::endl << "| ----- SEARCH CONTACT ----- |" << std::endl;

    // TODO: Gerer le cas ou l'utlisateur n'entre pas un int (boucle infinie)
    std::cout << "Contact index: ";
    std::cin >> index;
    std::cout << "contact[" << index << "] infos" << std::endl;
}
