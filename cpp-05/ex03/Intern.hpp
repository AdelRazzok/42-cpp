/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:11:30 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/03 11:24:13 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();

        Intern &operator=(const Intern &other);

        AForm    *makeShrubberyCreationForm(std::string target);
        AForm    *makeRobotomyRequestForm(std::string target);
        AForm    *makePresidentialPardonForm(std::string target);
        AForm    *makeForm(std::string name, std::string target);
};
