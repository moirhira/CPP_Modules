/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:08:06 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/16 15:48:34 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>

class Harl{
        private:
                void debug( void );
                void info( void );
                void warning( void );
                void error( void );
        public:
                Harl();
                void complain( std::string level );
};

#endif