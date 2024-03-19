/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:20:46 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/21 16:26:44 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <locale>

class Contact {
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact(void);
        ~Contact(void);

        std::string get_first_name();
        void set_first_name(std::string first_name);

        std::string get_last_name();
        void set_last_name(std::string last_name);

        std::string get_nickname();
        void set_nickname(std::string nickname);

        std::string get_phone_number();
        void set_phone_number(std::string phone_number);

        std::string get_darkest_secret();
        void set_darkest_secret(std::string darkest_secret);
};

#endif
