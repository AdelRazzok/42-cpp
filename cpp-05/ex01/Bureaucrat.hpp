/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:12:22 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/16 16:58:42 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &other);
        ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &other);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        const std::string   getName() const;
        int                 getGrade() const;
        void                incrementGrade();
        void                decrementGrade();
        void                signForm(Form &form) const;
};

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &obj);
