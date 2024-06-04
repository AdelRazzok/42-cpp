/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:15:13 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/04 18:29:18 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdlib.h>

template <typename T>
void iter(T *array, size_t size, void (*func)(T&))
{
    if (!array || !func)
        return;
    for (size_t i = 0; i < size; i++)
        func(array[i]);
}
