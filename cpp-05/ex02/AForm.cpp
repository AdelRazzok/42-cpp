/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:58:42 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/16 17:22:54 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _reqGradeToSign(150), _reqGradeToExecute(150)
{
	return;
}

AForm::AForm(const std::string name,
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
        throw AForm::GradeTooHighException();
    }
    if (this->_reqGradeToSign > 150)
    {
        throw AForm::GradeTooLowException();
    }
    if (this->_reqGradeToExecute < 1)
    {
        throw AForm::GradeTooHighException();
    }
    if (this->_reqGradeToExecute > 150)
    {
        throw AForm::GradeTooLowException();
    }
    return;
}

AForm::AForm(const AForm &other) : _reqGradeToSign(other._reqGradeToSign), _reqGradeToExecute(other._reqGradeToExecute)
{
    *this = other;
    return;
}

AForm::~AForm()
{
    return;
}

AForm    &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->_isSigned = other._isSigned;
    }
    return (*this);
}

const char*         AForm::GradeTooHighException::what() const throw()
{
    return ("grade is too high");
}

const char*         AForm::GradeTooLowException::what() const throw()
{
    return ("grade is too low");
}

const char*         AForm::FormNotSignedException::what() const throw()
{
    return ("form is not signed");
}

const std::string   AForm::getName() const
{
    return this->_name;
}

bool                AForm::getIsSigned() const
{
    return this->_isSigned;
}

const int           &AForm::getReqGradeToSign() const
{
    return this->_reqGradeToSign;
}

const int           &AForm::getReqGradeToExecute() const
{
    return this->_reqGradeToExecute;
}

void                AForm::beSigned(const Bureaucrat &bur)
{
    if (bur.getGrade() >= this->_reqGradeToSign)
    {
        throw AForm::GradeTooLowException();
    }
    this->_isSigned = true;
}

std::ostream    &operator<<(std::ostream &os, const AForm &obj)
{
    os << obj.getName() << (obj.getIsSigned() ? ", signed" : ", not signed") << " form ";
    os << "required grade to sign: " << obj.getReqGradeToSign();
    os << " required grade to execute: " << obj.getReqGradeToExecute() << ".";
    return os;
}
