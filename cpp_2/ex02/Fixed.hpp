/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:19:48 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/16 06:27:47 by mboudrio         ###   ########.fr       */
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
        Fixed(const Fixed &new_fixed);
        Fixed(const int number);
        Fixed(const float f_number);
        ~Fixed();
        
        bool operator >(const Fixed &new_fixed);
        bool operator <(const Fixed &new_fixed);
        bool operator >=(const Fixed &new_fixed);
        bool operator <=(const Fixed &new_fixed);
        bool operator ==(const Fixed &new_fixed);
        bool operator !=(const Fixed &new_fixed);

        
        Fixed &operator =(const Fixed &new_fixed);
        Fixed &operator +(const Fixed &new_fixed);
        Fixed &operator -(const Fixed &new_fixed);
        Fixed &operator *(const Fixed &new_fixed);
        Fixed &operator /(const Fixed &new_fixed);

        Fixed &operator --();
		Fixed &operator ++();
		Fixed operator++(int);
		Fixed operator--(int);
        
        static Fixed&min(Fixed &a, Fixed &b);
        static const Fixed&min( const Fixed &a, const Fixed &b);
        static Fixed&max(Fixed &a, Fixed &b);
        static const Fixed&max( const Fixed &a, const Fixed &b);
        
        
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat() const;
        int toInt() const;
};

int power2(int nb, int power);
std::ostream&operator<<(std::ostream& outy, const Fixed &f);

#endif