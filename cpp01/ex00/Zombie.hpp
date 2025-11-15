/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:04:30 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 17:25:18 by moirhira         ###   ########.fr       */
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
                Zombie(std::string i_name);
                ~Zombie();
                
                void announce(void);
};


Zombie* newZombie( std::string name );
void randomChump(std::string name);

#endif