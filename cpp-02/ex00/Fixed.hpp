/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:40:00 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/12 15:21:59 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    private:
        int                 raw;
        const static int    bits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &src);
        ~Fixed(void);

        Fixed &operator=(const Fixed &other);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif
