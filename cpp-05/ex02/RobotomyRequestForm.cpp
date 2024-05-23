/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:27:28 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/23 15:01:33 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{
    return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
        this->_target = other._target;
    }
    return (*this);
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (this->getIsSigned() == false)
        throw FormNotSignedException();
    if (executor.getGrade() > this->getReqGradeToExecute())
        throw GradeTooLowException();

    srand(time(NULL));
    int robotomyChance = rand() % 2;

    std::cout << "*drilling noises*" << std::endl;
    if (robotomyChance == 1)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomization of " << this->_target << " has failed" << std::endl;
}
