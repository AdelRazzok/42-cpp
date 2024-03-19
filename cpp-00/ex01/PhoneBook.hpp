/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:00:07 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/21 17:02:35 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"
# include <iostream>

class PhoneBook {
    private:
        Contact _contacts[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void add(int index);
        void search(void);
};

#endif
