/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:04:30 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 17:46:22 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

        private:
                std::string name;
                
        public:
                Zombie() : name("Unnamed") {};
                Zombie(std::string i_name);
                ~Zombie();
                
                void setName(std::string i_name);
                void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif