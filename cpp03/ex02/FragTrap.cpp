/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:44:52 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 15:55:54 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("NULL")
{
        hitPoints = 100;
        energyPoints = 100;
        attackDamage = 30;
        std::cout << "FragTrap " << Name << " is ready to party!" << std::endl;
}


FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
        hitPoints = 100;
        energyPoints = 100;
        attackDamage = 30;
        std::cout << "FragTrap " << Name << " is ready to party!" << std::endl;       
}


FragTrap::FragTrap(const FragTrap& other): ClapTrap(other)
{
        std::cout << "FragTrap " << Name << " copied!" << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap& other)
{
        ClapTrap::operator=(other);
        std::cout << "FragTrap " << Name << " assigned!" << std::endl;
        return *this;
}



FragTrap::~FragTrap()
{
        std::cout << "FragTrap " << Name << " destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
        if (hitPoints == 0 || energyPoints == 0) {
                std::cout << "FragTrap " << this->Name << " can't attack!" << std::endl;
                return;
        }
        energyPoints--;
        std::cout << "FragTrap " << Name
              << " drab " << target
              << " for " << attackDamage << " damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
        std::cout << "FragTrap " << Name << " requests a high five! ✋" << std::endl;
}