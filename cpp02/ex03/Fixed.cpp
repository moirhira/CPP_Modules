/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:36:10 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/26 12:43:56 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath> 

Fixed::Fixed() : value(0) {}

Fixed::Fixed(int const nbr) {
        this->value = nbr << number_frc;
}

Fixed::Fixed(float const nbr) {
        this->value = (int)roundf(nbr * (1 << number_frc));
}

Fixed::Fixed(const Fixed& other) : value(other.value) {}



Fixed &Fixed::operator=(const Fixed& other){
        this->value = other.value;
        return (*this);
}


Fixed::~Fixed() {
}

int Fixed::getRawBits( void ) const {
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


bool Fixed::operator>(const Fixed &other) const {
        return this->value > other.value;
}

bool Fixed::operator<(const Fixed &other) const {
        return this->value < other.value;
}

bool Fixed::operator>=(const Fixed &other) const {
        return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed &other) const {
        return this->value <= other.value;
}

bool Fixed::operator==(const Fixed &other) const {
        return this->value == other.value;
}

bool Fixed::operator!=(const Fixed &other) const {
        return this->value != other.value;
}


Fixed Fixed::operator+(const Fixed &other) {
        Fixed new_f;
        new_f.value = this->value + other.value;
        return new_f;
}

Fixed Fixed::operator-(const Fixed &other) {
        Fixed new_f;
        new_f.value = this->value - other.value;
        return new_f;
}

Fixed Fixed::operator*(const Fixed &other) {
        Fixed new_f;
        new_f.value = (this->value * other.value >> number_frc);
        return new_f;
}

Fixed Fixed::operator/(const Fixed &other) {
        Fixed new_f;
        new_f.value = (this->value << number_frc) / other.value;
        return new_f;
}


Fixed& Fixed::operator++() {
        this->value++;
        return *this;
}

Fixed Fixed::operator++(int) {
        Fixed tmp(*this);
        this->value++;
        return tmp;
}

Fixed& Fixed::operator--() {
        this->value--;
        return *this;
}

Fixed Fixed::operator--(int) {
        Fixed tmp(*this);
        this->value--;
        return tmp;
}


Fixed& Fixed::min(Fixed &f_obj, Fixed &s_obj){
        if (f_obj.value < s_obj.value)
                return f_obj;
        else
                return s_obj;
}


const Fixed& Fixed::min(const Fixed &f_obj, const Fixed &s_obj){
        if (f_obj.value < s_obj.value)
                return f_obj;
        else
                return s_obj;
}

Fixed& Fixed::max(Fixed &f_obj, Fixed &s_obj){
        if (f_obj.value < s_obj.value)
                return s_obj;
        else
                return f_obj;
}


const Fixed& Fixed::max(const Fixed &f_obj, const Fixed &s_obj){
        if (f_obj.value < s_obj.value)
                return s_obj;
        else
                return f_obj;
}