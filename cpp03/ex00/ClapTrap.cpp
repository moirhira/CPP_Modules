/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:06:55 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 11:39:25 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
        : Name("NULL"), hitPoints(10), energyPoints(10), attackDamage(0)
{
        std::cout << "ClapTrap " << Name << " has been created!" << std::endl;
}


ClapTrap::ClapTrap(const std::string& name)
        : Name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
        std::cout << "ClapTrap " << Name << " has been created!" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& other) 
        : Name(other.Name), hitPoints(other.hitPoints),
         energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
      std::cout << "ClapTrap " << Name << " copied!" << std::endl;  
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
        this->Name = other.Name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        std::cout << "ClapTrap " << Name << " assigned!" << std::endl;
        return (*this);
}


ClapTrap::~ClapTrap()
{
        std::cout << "ClapTrap " << Name << " has been destroyed!" << std::endl;
}





// std::string ClapTrap::getName() const
// {
//         return this->Name;
// }


// int ClapTrap::getHit() const
// { 
//         return this->hitPoints;
// }


// int ClapTrap::getEnergy() const
// {
//         return this->energyPoints;
// }


// int ClapTrap::getAttackDamage() {
//         return this->attackDamage;
// }




void ClapTrap::attack(const std::string& target)
{
        if (hitPoints == 0 || energyPoints == 0) {
                std::cout << "ClapTrap " << this->Name << " can't attack!" << std::endl;
                return;
        }
        energyPoints--;
        std::cout << "ClapTrap " 
                  << Name << " attacks " 
                  << target << " causing " << attackDamage 
                  << " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount) {
        if (hitPoints == 0)
        {
                std::cout << "ClapTrap " << Name << " is already out of hit points!" << std::endl;
                return;
        }
        if (amount >= hitPoints)
                hitPoints = 0;
        else
                this->hitPoints -= amount;
        std::cout << "ClapTrap " << Name << " takes " << amount 
                  << " points of damage! HP now: " <<  hitPoints << std::endl;
}




void ClapTrap::beRepaired(unsigned int amount) {
        if (hitPoints == 0 || energyPoints == 0) {
                std::cout << "ClapTrap " << this->Name << " cannot repair itself!" << std::endl;
                return;
        }
        this->energyPoints--;
        hitPoints += amount;
        std::cout << "ClapTrap " << Name << " repairs itself, regaining "
                  << amount << " HP! Current HP: " << hitPoints << std::endl;
}

