/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:11:21 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/03 12:06:54 by arazzok          ###   ########.fr       */
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
    (void)other;
    return (*this);
}

AForm    *Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm    *Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm    *Intern::makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm  *Intern::makeForm(std::string name, std::string target)
{
    std::string formsNames[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm *(Intern::*formsFunctions[3])(std::string) = {
        &Intern::makeShrubberyCreationForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makePresidentialPardonForm
    };

    for (int i = 0; i < 3; i++)
    {
        if (name == formsNames[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return ((this->*formsFunctions[i])(target));
        }
    }

    std::cout << "Error: invalid form. (valid forms: shrubbery creation, robotomy request, presidential pardon)" << std::endl;
    return 0;
}
