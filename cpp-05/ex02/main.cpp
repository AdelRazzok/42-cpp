/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:49:13 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/23 14:29:59 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat              boss("Mafia boss", 1);
    Bureaucrat              manager("Manager", 70);
    Bureaucrat              clerk("Clerk", 150);
    ShrubberyCreationForm   form("home");

    std::cout << "Boss:" << std::endl;
    try
    {
        form.beSigned(boss);
        std::cout << boss.getName() << " signed " << form.getName() << std::endl;
        form.execute(boss);
        std::cout << boss.getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    std::cout << std::endl << "Manager:" << std::endl;
    try
    {
        form.beSigned(manager);
        std::cout << manager.getName() << " signed " << form.getName() << std::endl;
        form.execute(manager);
        std::cout << manager.getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    std::cout << std::endl << "Clerk:" << std::endl;
    try
    {
        form.beSigned(clerk);
        std::cout << clerk.getName() << " signed " << form.getName() << std::endl;
        form.execute(clerk);
        std::cout << clerk.getName() << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
