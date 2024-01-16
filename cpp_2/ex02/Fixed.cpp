/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:19:50 by mboudrio          #+#    #+#             */
/*   Updated: 2024/01/16 06:29:34 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
    std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int number)
{
    std::cout << "int Constructor Called" << std::endl;
    this->fixed_point = number * power2(2, fractional_bits);
}

Fixed::Fixed(const float f_number)
{
    std::cout << "Float Constructor Called" << std::endl;
    this->fixed_point = roundf(f_number * power2(2, fractional_bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &new_fixed)
{
    *this = new_fixed;
    std::cout << "Copy assignment operator called" << std::endl;
}

//  COMPARISON  OPERATORS

bool Fixed::operator <(const Fixed &new_fixed)
{
	return(fixed_point < new_fixed.getRawBits());
}
bool Fixed::operator >(const Fixed &new_fixed)
{
	return(fixed_point > new_fixed.getRawBits());
}
bool Fixed::operator <=(const Fixed &new_fixed)
{
	return(fixed_point <= new_fixed.getRawBits());
}
bool Fixed::operator >=(const Fixed &new_fixed)
{
	return(fixed_point >= new_fixed.getRawBits());
}
bool Fixed::operator ==(const Fixed &new_fixed)
{
	return(fixed_point == new_fixed.getRawBits());
}
bool Fixed::operator !=(const Fixed &new_fixed)
{
	return(fixed_point != new_fixed.getRawBits());
}

//  ARITHMETHIC  OPERATORS

Fixed &Fixed::operator =(const Fixed &new_fixed)
{
	fixed_point = new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator +(const Fixed &new_fixed)
{
	fixed_point += new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator -(const Fixed &new_fixed)
{
	fixed_point -= new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator *(const Fixed &new_fixed)
{
	fixed_point *= new_fixed.getRawBits();
	return *this;
}
Fixed &Fixed::operator /(const Fixed &new_fixed)
{
	fixed_point /= new_fixed.getRawBits();
	return *this;
}

Fixed &Fixed::operator --()
{
	--fixed_point;
	return *this;
}
Fixed &Fixed::operator ++()
{
	++fixed_point;
	return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++fixed_point;
    return temp;
}
Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --fixed_point;
    return temp;
}

int Fixed::getRawBits() const
{
    return fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
}

float Fixed::toFloat() const
{
    return (float)this->fixed_point / power2(2,fractional_bits);
}

int Fixed::toInt() const
{
    return roundf(this->fixed_point) / power2(2,fractional_bits);
}

std::ostream&operator<<(std::ostream& outy, const Fixed &f)
{
    outy << f.toFloat();
    return (outy);
}

int power2(int nb, int power)
{
    int i = 1;
    int res = 1;

    if(power < 0)
        return 0;
    else if (power > 0)
    {
        while(i <= power)
        {
            res = res * nb;
            i++;
        }
    }
    else 
        return 1;
    return res; 
}



