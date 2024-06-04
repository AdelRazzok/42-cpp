/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:40:24 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/04 15:02:02 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

struct Data
{
    int         id;
    std::string name;
    float       balance;
};

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &other);
        ~Serializer();
        Serializer &operator=(const Serializer &other);
    public:
        static uintptr_t    serialize(Data *ptr);
        static Data         *deserialize(uintptr_t raw);
};
