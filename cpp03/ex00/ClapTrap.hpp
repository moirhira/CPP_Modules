/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:08:51 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 11:37:38 by moirhira         ###   ########.fr       */
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
        private:
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
                
                // std::string getName() const;
                // unsigned int getHit() const;
                // unsigned int getEnergy() const;
                // unsigned int getAttackDamage() const;
                
                void attack(const std::string& target);
                void takeDamage(unsigned int amount);
                void beRepaired(unsigned int amount);
};

#endif