/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:58:42 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/16 17:22:54 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _isSigned(false), _reqGradeToSign(150), _reqGradeToExecute(150)
{
	return;
}

Form::Form(const std::string name,
           const int reqGradeToSign,
	       const int reqGradeToExecute
        ) : 
           _name(name),
           _isSigned(false),
	       _reqGradeToSign(reqGradeToSign),
           _reqGradeToExecute(reqGradeToExecute)
{
    if (this->_reqGradeToSign < 1)
    {
        throw Form::GradeTooHighException();
    }
    if (this->_reqGradeToSign > 150)
    {
        throw Form::GradeTooLowException();
    }
    if (this->_reqGradeToExecute < 1)
    {
        throw Form::GradeTooHighException();
    }
    if (this->_reqGradeToExecute > 150)
    {
        throw Form::GradeTooLowException();
    }
    return;
}

Form::Form(const Form &other) : _reqGradeToSign(other._reqGradeToSign), _reqGradeToExecute(other._reqGradeToExecute)
{
    *this = other;
    return;
}

Form::~Form()
{
    return;
}

Form    &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->_isSigned = other._isSigned;
    }
    return (*this);
}

const char*         Form::GradeTooHighException::what() const throw()
{
    return ("grade is too high");
}

const char*         Form::GradeTooLowException::what() const throw()
{
    return ("grade is too low");
}

const std::string   Form::getName() const
{
    return this->_name;
}

bool                Form::getIsSigned() const
{
    return this->_isSigned;
}

const int           &Form::getReqGradeToSign() const
{
    return this->_reqGradeToSign;
}

const int           &Form::getReqGradeToExecute() const
{
    return this->_reqGradeToExecute;
}

void                Form::beSigned(const Bureaucrat &bur)
{
    if (bur.getGrade() >= this->_reqGradeToSign)
    {
        throw Form::GradeTooLowException();
    }
    this->_isSigned = true;
}

std::ostream    &operator<<(std::ostream &os, const Form &obj)
{
    os << obj.getName() << (obj.getIsSigned() ? ", signed" : ", not signed") << " form ";
    os << "required grade to sign: " << obj.getReqGradeToSign();
    os << " required grade to execute: " << obj.getReqGradeToExecute() << ".";
    return os;
}
