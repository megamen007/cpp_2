/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:18:11 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/16 06:10:35 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fractional_bits = 8;
    public:
    
        Fixed();
        Fixed(const int number);
        Fixed(const float f_number);
        Fixed(const Fixed &new_fixed);
        Fixed &operator =(const Fixed &new_fixed);
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
        ~Fixed();
};

int power2(int nb, int power);
std::ostream&operator<<(std::ostream& outy, const Fixed &f);


#endif