/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:35:07 by arazzok           #+#    #+#             */
/*   Updated: 2024/02/20 20:27:46 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i, j;

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    i = 1;
    while (i < argc && argv[i]) {
        j = 0;
        while (argv[i][j]) {
            std::cout << (char)std::toupper(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}
