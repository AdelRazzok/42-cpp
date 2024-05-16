/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:14:26 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/16 15:37:55 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    return;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
    return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
    return;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->_grade = other._grade;
    }
    return (*this);
}

const char*         Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade cannot be set over 1");
}

const char*         Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade cannot be set under 150");
}

const std::string   Bureaucrat::getName() const
{
    return this->_name;
}

int                 Bureaucrat::getGrade() const
{
    return this->_grade;
}

void                Bureaucrat::incrementGrade()
{
    if (this->_grade <= 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade--;
}

void                Bureaucrat::decrementGrade()
{
    if (this->_grade >= 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade++;
}

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}
