/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:50:42 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/04 18:01:02 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T &value1, T &value2)
{
    T temp = value1;
    value1 = value2;
    value2 = temp;
}

template <typename T>
T min(T value1, T value2)
{
    return value1 < value2 ? value1 : value2;
}

template <typename T>
T max(T value1, T value2)
{
    return value1 > value2 ? value1 : value2;
}
