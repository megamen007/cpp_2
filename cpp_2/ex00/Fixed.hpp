/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:26:15 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/24 23:15:26 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>


class Fixed
{
    private:
        int fixed_point_value;
        static const int fractional_bits;
    public:
    
        Fixed();
        Fixed(const Fixed &new_fixed);
        Fixed &operator =(const Fixed &new_fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
        ~Fixed();
};

#endif