/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:39:55 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/14 11:56:14 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * Constructors / Descructor
*/

Fixed::Fixed(void) : raw(0) {
    return;
}

Fixed::Fixed(int const comma) : raw(comma << Fixed::BITS) {
    return;
}

Fixed::Fixed(float const comma) : raw(roundf(comma * (1 << Fixed::BITS))) {
    return;
}

Fixed::Fixed(const Fixed &src) {
    *this = src;
    return;
}

Fixed::~Fixed(void) {
    return;
}

/**
 * Operators overloads
*/

Fixed           &Fixed::operator=(const Fixed &other) {
    if (this != &other) {
        this->raw = other.getRawBits();
    }
    return *this;
}

bool            Fixed::operator>(const Fixed &other) const {
    return this->raw > other.raw;
}

bool            Fixed::operator<(const Fixed &other) const {
    return this->raw < other.raw;
}

bool            Fixed::operator>=(const Fixed &other) const {
    return this->raw >= other.raw;
}

bool            Fixed::operator<=(const Fixed &other) const {
    return this->raw <= other.raw;
}

bool            Fixed::operator==(const Fixed &other) const {
    return this->raw == other.raw;
}

bool            Fixed::operator!=(const Fixed &other) const {
    return this->raw != other.raw;
}

Fixed           Fixed::operator+(const Fixed &other) const {
    Fixed temp;
    temp.raw = this->raw + other.raw;
    return temp;
}

Fixed           Fixed::operator-(const Fixed &other) const {
    Fixed temp;
    temp.raw = this->raw - other.raw;
    return temp;
}

Fixed           Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed           Fixed::operator/(const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed           &Fixed::operator++(void) {
    this->raw++;
    return *this;
}

Fixed           Fixed::operator++(int) {
    Fixed temp = *this;
    this->raw++;
    return temp;
}

Fixed           &Fixed::operator--(void) {
    this->raw--;
    return *this;
}

Fixed           Fixed::operator--(int) {
    Fixed temp = *this;
    this->raw--;
    return temp;
}

/**
 * Getters / Setters
*/

int             Fixed::getRawBits(void) const {
    return this->raw;
}

void            Fixed::setRawBits(int const raw) {
    this->raw = raw;
    return;
}

/**
 * Converters
*/

float           Fixed::toFloat(void) const {
    return this->raw / static_cast<float>(1 << Fixed::BITS);
}

int             Fixed::toInt(void) const {
    return this->raw >> Fixed::BITS;
}

/**
 * Static functions
*/

const Fixed     &Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

const Fixed     &Fixed::min(const Fixed &a, const Fixed &b) {
    return a < b ? a : b;
}

const Fixed     &Fixed::max(Fixed &a, Fixed &b) {
    return a > b ? a : b;
}

const Fixed     &Fixed::max(const Fixed &a, const Fixed &b) {
    return a > b ? a : b;
}

/**
 * Other
*/

std::ostream    &operator<<(std::ostream &os, const Fixed &obj) {
    os << obj.toFloat();
    return os;
}
