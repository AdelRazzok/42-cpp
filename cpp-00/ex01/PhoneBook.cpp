/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:35:05 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/22 17:43:06 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

bool PhoneBook::add(int index) {
    std::string input;

    std::cout << std::endl << "| ----- ADD CONTACT ----- |" << std::endl;

    std::cin.ignore();
    std::cout << "First name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "First name can't be empty";
        return (false);
    }
    this->_contacts[index].set_first_name(input);

    std::cout << "Last name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Last name can't be empty";
        return (false);
    }
    this->_contacts[index].set_last_name(input);

    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Nickname can't be empty";
        return (false);
    }
    this->_contacts[index].set_nickname(input);

    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Phone number can't be empty";
        return (false);
    }
    this->_contacts[index].set_phone_number(input);

    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "Darkest secret can't be empty";
        return (false);
    }
    this->_contacts[index].set_darkest_secret(input);

    std::cout << "User created on index " << index << std::endl;
    return (true);
}

void PhoneBook::search(void) {
    std::stringstream   ss;
    std::string         string_index;
    int                 index;

    std::cout << std::endl << "| ----- SEARCH CONTACT ----- |" << std::endl;

    this->print_all_contacts();

    std::cout << "Contact index: ";
    std::cin >> string_index;
    ss << string_index;
    ss >> index;
    if (ss.fail()) {
        std::cout << "Only integer allowed" << std::endl;
        ss.clear();
        return;
    }
    if (index > 7) {
        std::cout << "Only indexes between 0 and 7 are accepted" << std::endl;
        ss.clear();
        return;
    }

    this->print_one_contact(index);
    return;
}

void PhoneBook::print_all_contacts(void) {
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;
    unsigned long   word_len_max = 10;
    int             contacts_len = 8;
    int             i = 0;

    std::cout << std::endl << "---------------------------------------------" << std::endl;
    std::cout << "|                 CONTACTS                  |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    while (i < contacts_len) {
        first_name = this->_contacts[i].get_first_name();
        last_name = this->_contacts[i].get_last_name();
        nickname = this->_contacts[i].get_nickname();

        if (first_name.empty()) {
            i++;
            continue;
        }
        if (first_name.length() > word_len_max) {
            first_name.resize(word_len_max - 1);
            first_name.append(".");
        }
        if (last_name.length() > word_len_max) {
            last_name.resize(word_len_max - 1);
            last_name.append(".");
        }
        if (nickname.length() > word_len_max) {
            nickname.resize(word_len_max - 1);
            nickname.append(".");
        }

        std::cout << "|"
                << std::right
                << std::setw(10)
                << i;
        std::cout << "|"
                << std::right
                << std::setw(10)
                << first_name;
        std::cout << "|"
                << std::right
                << std::setw(10)
                << last_name;
        std::cout << "|"
                << std::right
                << std::setw(10)
                << nickname
                << "|"
                << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
        i++;
    }
    std::cout << std::endl;
    return;
}

void PhoneBook::print_one_contact(int index) {
    if (this->_contacts[index].get_first_name().empty()) {
        std::cout << "No contact at this index" << std::endl;
        return;
    }
    std::cout << std::endl << "| ----- CONTACT " << index << " ----- |" << std::endl;
    std::cout << "First name: " << this->_contacts[index].get_first_name() << std::endl;
    std::cout << "Last name: " << this->_contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << this->_contacts[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << this->_contacts[index].get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << this->_contacts[index].get_darkest_secret() << std::endl;
    return;
}
