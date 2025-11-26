/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:36:10 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/26 09:50:07 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath> 

Fixed::Fixed() : value(0) {
        std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nbr) {
        std::cout << "Int constructor called" << std::endl;
        this->value = nbr << number_frc;
}

Fixed::Fixed(float const nbr) {
        std::cout << "Float constructor called" << std::endl;
        this->value = (int)roundf(nbr * (1 << number_frc));
}

Fixed::Fixed(const Fixed& other) : value(other.value) {
        std::cout << "Copy constructor called" << std::endl;
}



Fixed &Fixed::operator=(const Fixed& other){
        std::cout << "Copy assignment operator called" << std::endl;
        this->value = other.value;
        return (*this);
}


Fixed::~Fixed() {
        std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
        std::cout << "getRawBits member function called" << std::endl;
        return(this->value);
}

void Fixed::setRawBits( int const raw ) {
        this->value = raw;
}



float Fixed::toFloat( void ) const {
        float f_number = (float)this->value / (1 << number_frc);
        return (f_number);
}
 


int Fixed::toInt( void ) const {
        int i_number = this->value / (1 << number_frc);
        return (i_number);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
        out << fixed.toFloat();
        return out;
}