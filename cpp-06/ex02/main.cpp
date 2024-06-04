/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:20:57 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/04 17:22:21 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Base    *generate(void)
{
    int i = rand() % 3;
    if (i == 0)
        return new A;
    if (i == 1)
        return new B;
    return new C;
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void    identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    }
    catch(const std::exception &e) {}

    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    }
    catch(const std::exception &e) {}

    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    }
    catch(const std::exception &e) {}

    std::cout << "Unknown" << std::endl;
}

int     main(void)
{
    Base    *random = generate();
    Base    base;
    A       a;
    B       b;
    C       c;

    srand(time(NULL));

    std::cout << "Random: " << std::endl;
    std::cout << "By pointer: ";
    identify(random);
    std::cout << "By reference: ";
    identify(*random);

    std::cout << std::endl;

    std::cout << "Base: " << std::endl;
    std::cout << "By pointer: ";
    identify(&base);
    std::cout << "By reference: ";
    identify(base);

    std::cout << std::endl;

    std::cout << "A: " << std::endl;
    std::cout << "By pointer: ";
    identify(&a);
    std::cout << "By reference: ";
    identify(a);

    std::cout << std::endl;

    std::cout << "B: " << std::endl;
    std::cout << "By pointer: ";
    identify(&b);
    std::cout << "By reference: ";
    identify(b);

    std::cout << std::endl;

    std::cout << "C: " << std::endl;
    std::cout << "By pointer: ";
    identify(&c);
    std::cout << "By reference: ";
    identify(c);

    delete random;
    return 0;
}
