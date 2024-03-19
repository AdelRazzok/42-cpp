/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:40:00 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/12 15:47:08 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    private:
        int                 raw;
        const static int    BITS = 8;
    public:
        Fixed(void);
        Fixed(int const comma);
        Fixed(float const comma);
        Fixed(const Fixed &src);
        ~Fixed(void);

        Fixed   &operator=(const Fixed &other);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream    &operator<<(std::ostream &os, const Fixed &obj);

#endif
