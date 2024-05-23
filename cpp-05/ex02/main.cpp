/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:49:13 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/23 15:17:52 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    Bureaucrat              boss("Boss", 1);
    Bureaucrat              manager("Manager", 70);
    Bureaucrat              clerk("Clerk", 150);
    ShrubberyCreationForm   sForm("home");
    RobotomyRequestForm     rForm("Bender");

    /*****   ShrubberyCreationForm tests   *****/
    std::cout << "Boss:" << std::endl;
    try
    {
        sForm.beSigned(boss);
        std::cout << boss.getName() << " signed " << sForm.getName() << std::endl;
        sForm.execute(boss);
        std::cout << boss.getName() << " executed " << sForm.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    std::cout << std::endl << "Manager:" << std::endl;
    try
    {
        sForm.beSigned(manager);
        std::cout << manager.getName() << " signed " << sForm.getName() << std::endl;
        sForm.execute(manager);
        std::cout << manager.getName() << " executed " << sForm.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    std::cout << std::endl << "Clerk:" << std::endl;
    try
    {
        sForm.beSigned(clerk);
        std::cout << clerk.getName() << " signed " << sForm.getName() << std::endl;
        sForm.execute(clerk);
        std::cout << clerk.getName() << " executed " << sForm.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    std::cout << std::endl << "-----" << std::endl;

    /*****   RobotomyRequestForm tests   *****/
    std::cout << std::endl << "Boss:" << std::endl;
    try
    {
        rForm.beSigned(boss);
        std::cout << boss.getName() << " signed " << rForm.getName() << std::endl;
        rForm.execute(boss);
        std::cout << boss.getName() << " executed " << rForm.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    std::cout << std::endl << "Manager:" << std::endl;
    try
    {
        rForm.beSigned(manager);
        std::cout << manager.getName() << " signed " << rForm.getName() << std::endl;
        rForm.execute(manager);
        std::cout << manager.getName() << " executed " << rForm.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    std::cout << std::endl << "Clerk:" << std::endl;
    try
    {
        rForm.beSigned(clerk);
        std::cout << clerk.getName() << " signed " << rForm.getName() << std::endl;
        rForm.execute(clerk);
        std::cout << clerk.getName() << " executed " << rForm.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }
    return 0;
}
