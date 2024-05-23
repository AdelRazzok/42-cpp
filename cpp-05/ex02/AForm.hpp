/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:41:14 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/16 17:09:01 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        bool                _isSigned;
        const int           _reqGradeToSign;
        const int           _reqGradeToExecute;
    public:
        AForm();
        AForm(const std::string name, const int reqGradeToSign, const int reqGradeToExecute);
        AForm(const AForm &other);
        ~AForm();

        AForm &operator=(const AForm &other);

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

        class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        const std::string   getName() const;
        bool                getIsSigned() const;
        const int           &getReqGradeToSign() const;
        const int           &getReqGradeToExecute() const;
        void                beSigned(const Bureaucrat &bur);
        virtual void        execute(const Bureaucrat &executor) const = 0;
};

std::ostream    &operator<<(std::ostream &os, const AForm &obj);
