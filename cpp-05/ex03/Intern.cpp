/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:11:21 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/23 16:15:54 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    return;
}

Intern::Intern(const Intern &other)
{
    *this = other;
    return;
}

Intern::~Intern()
{
    return;
}

Intern &Intern::operator=(const Intern &other)
{
    return (*this);
}

