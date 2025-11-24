/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:27:37 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/24 22:57:21 by moirhira         ###   ########.fr       */
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
                Fixed(const Fixed& other);
                Fixed &operator=(const Fixed& other);
                ~Fixed(void);
                int getRawBits(void) const;
                void setRawBits(int const raw);
                
};

#endif