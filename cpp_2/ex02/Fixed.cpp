/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 23:19:50 by mboudrio          #+#    #+#             */
/*   Updated: 2023/12/24 23:53:55 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
   this->fixed_point_value = 0;
   std::cout <<"Default constructor called"<< std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &new_fixed)
{
    *this = new_fixed;
    std::cout <<"Copy constructor called"<< std::endl;
}

Fixed &Fixed::operator =(const Fixed &new_fixed)
{
    fixed_point_value = new_fixed.getRawBits();
    std::cout <<"Copy assignment operator called"<< std::endl;
    return *this;   
}

int Fixed::getRawBits() const
{
    std::cout <<"getRawBits member function called"<< std::endl;
    return fixed_point_value;
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_value = raw;
}