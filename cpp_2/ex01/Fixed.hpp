/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:18:11 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/24 23:52:53 by mboudrio         ###   ########.fr       */
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
        Fixed(const int number);
        Fixed(const float f_number);
        Fixed &operator =(const Fixed &new_fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
        ~Fixed();
};

#endif