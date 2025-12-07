/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:48:39 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 22:57:04 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP 
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {
        public: 
                ScavTrap();
                ScavTrap(const std::string& name);
                ScavTrap(const ScavTrap& other);
                ScavTrap& operator=(const ScavTrap& other);
                ~ScavTrap();
                void attack(const std::string& target);
                void guardGate();
};

#endif