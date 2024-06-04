/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:23:58 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/04 10:55:49 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    *this = other;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
    {
        *this = other;
    }
    return (*this);
}

void    ScalarConverter::convert(std::string value)
{
    std::stringstream   ss;
    char                c;
    int                 i;
    float               f;
    double              d;

    ss << value;
    ss >> d;
    if (ss.fail())
    {
        if (value.length() != 1)
        {
            d = std::strtod(value.c_str(), NULL);
            if (d == 0.0)
            {
                std::cerr << "char: impossible" << std::endl;
                std::cerr << "int: impossible" << std::endl;
                std::cerr << "float: impossible" << std::endl;
                std::cerr << "double: impossible" << std::endl;
                return;
            }
            else
                d = static_cast<double>(value.at(0));
        }
    }
    c = static_cast<char>(d);
    i = static_cast<int>(d);
    f = static_cast<float>(d);

    if (std::isfinite(d))
    {
        if (d < std::numeric_limits<char>::min() || d > std::numeric_limits<char>::max())
            std::cout << "char: impossible" << std::endl;
        else if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl; 

        if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max())
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << i << std::endl;
    }
    else
        std::cout << "char: impossible\nint: impossible" << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: "  << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}
