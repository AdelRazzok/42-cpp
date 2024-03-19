/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:40:00 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/12 14:39:13 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private:
        int                 raw;
        const static int    nb_bits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed& src);
        Fixed &operator=(const Fixed& other);
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif
