/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:08:51 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 15:04:18 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 10:59:49 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 11:07:39 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
        protected:
                std::string Name;
                unsigned int hitPoints;
                unsigned int energyPoints;
                unsigned int attackDamage;
        public:
                ClapTrap();
                ClapTrap(const std::string& name);
                ClapTrap(const ClapTrap& other);
                ClapTrap& operator=(const ClapTrap& other);
                ~ClapTrap();
                
                
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
};

#endif