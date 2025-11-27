/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:27:37 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/26 12:39:07 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
        private:
                int value;
                static const int number_frc = 8;
        public:
                Fixed(void);
                Fixed(int const nbr);
                Fixed(float const nbr);
                Fixed(const Fixed& other);
                Fixed &operator=(const Fixed& other);
                ~Fixed(void);
                int getRawBits(void) const;
                void setRawBits(int const raw);
                float toFloat( void ) const;
                int toInt( void ) const;
                bool operator>(const Fixed &other) const;
                bool operator<(const Fixed &other) const;
                bool operator>=(const Fixed &other) const;
                bool operator<=(const Fixed &other) const;
                bool operator==(const Fixed &other) const;
                bool operator!=(const Fixed &other) const;
                Fixed operator+(const Fixed &other);
                Fixed operator-(const Fixed &other);
                Fixed operator*(const Fixed &other);
                Fixed operator/(const Fixed &other);
                Fixed& operator++();
                Fixed operator++(int);
                Fixed& operator--();
                Fixed operator--(int);
                static  Fixed& min(Fixed &f_obj, Fixed &s_obj);
                static const Fixed& min(const Fixed &f_obj, const Fixed &s_obj);
                static  Fixed& max(Fixed &f_obj, Fixed &s_obj);
                static const Fixed& max(const Fixed &f_obj, const Fixed &s_obj);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif