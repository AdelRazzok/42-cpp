/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:00:07 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/22 18:15:04 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"
# include <iostream>
# include <sstream>
# include <iomanip>
# include <string>

class PhoneBook {
    private:
        Contact _contacts[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        bool add(int index);
        void search(void);
        void print_all_contacts(void);
        void print_one_contact(int index);
};

#endif
