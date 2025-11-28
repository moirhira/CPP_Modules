/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:44:55 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 15:55:22 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP 
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
        public: 
                FragTrap();
                FragTrap(const std::string& name);
                FragTrap(const FragTrap& other);
                FragTrap& operator=(const FragTrap& other);
                ~FragTrap();
                void attack(const std::string& target);
                void highFivesGuys(void);
};

#endif