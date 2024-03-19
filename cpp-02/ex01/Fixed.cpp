/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:39:55 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/12 16:11:28 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : raw(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const comma) : raw(comma << Fixed::BITS) {
    std::cout << "Int constructor called" << std::endl;
    return;
}

Fixed::Fixed(float const comma) : raw(roundf(comma * (1 << Fixed::BITS))) {
    std::cout << "Float constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed           &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->raw = other.getRawBits();
    }
    return *this;
}

int             Fixed::getRawBits(void) const {
    return this->raw;
}

void            Fixed::setRawBits(int const raw) {
    this->raw = raw;
    return;
}

float           Fixed::toFloat(void) const {
    return this->raw / static_cast<float>(1 << Fixed::BITS);
}

int             Fixed::toInt(void) const {
    return this->raw >> Fixed::BITS;
}

std::ostream    &operator<<(std::ostream &os, const Fixed &obj) {
    os << obj.toFloat();
    return os;
}
