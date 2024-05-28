/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:11:30 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/23 16:12:59 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();

        Intern &operator=(const Intern &other);

        Form *makeForm(std::string name, std::string target);
};
