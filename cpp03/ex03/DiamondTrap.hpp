/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 22:21:24 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/07 11:32:31 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP 
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
        private:
                std::string Name;
        public: 
                DiamondTrap();
                DiamondTrap(const std::string& name);
                DiamondTrap(const DiamondTrap& other);
                DiamondTrap& operator=(const DiamondTrap& other);
                ~DiamondTrap();
                void attack(const std::string& target);
                void whoAmI();
};

#endif