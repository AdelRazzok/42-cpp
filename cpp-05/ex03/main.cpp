/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:49:13 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/23 15:47:12 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat              boss("Boss", 1);
    Bureaucrat              manager("Manager", 70);
    Bureaucrat              clerk("Clerk", 150);
    ShrubberyCreationForm   sForm("home");
    RobotomyRequestForm     rForm("Bender");
    PresidentialPardonForm  pForm("Homer");

    /*****   ShrubberyCreationForm tests   *****/
    std::cout << "Boss:" << std::endl;
    boss.executeForm(sForm);
    boss.signForm(sForm);
    boss.executeForm(sForm);
    std::cout << std::endl << "Manager:" << std::endl;
    manager.signForm(sForm);
    manager.executeForm(sForm);
    std::cout << std::endl << "Clerk:" << std::endl;
    clerk.signForm(sForm);
    clerk.executeForm(sForm);
    std::cout << std::endl << "-----" << std::endl;

    /*****   RobotomyRequestForm tests   *****/
    std::cout << std::endl << "Boss:" << std::endl;
    boss.signForm(rForm);
    boss.executeForm(rForm);
    std::cout << std::endl << "Manager:" << std::endl;
    manager.signForm(rForm);
    manager.executeForm(rForm);
    std::cout << std::endl << "Clerk:" << std::endl;
    clerk.signForm(rForm);
    clerk.executeForm(rForm);
    std::cout << std::endl << "-----" << std::endl;

    /*****   PresidentialPardonForm   *****/
    std::cout << std::endl << "Boss:" << std::endl;
    boss.signForm(pForm);
    boss.executeForm(pForm);
    std::cout << std::endl << "Manager:" << std::endl;
    manager.signForm(pForm);
    manager.executeForm(pForm);
    std::cout << std::endl << "Clerk:" << std::endl;
    clerk.signForm(pForm);
    clerk.executeForm(pForm);
    return 0;
}
