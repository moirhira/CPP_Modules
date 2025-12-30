#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("NULL")
{
        hitPoints = 100;
        energyPoints = 50;
        attackDamage = 20;
        std::cout << "ScavTrap " << Name << " created!" << std::endl;
}


ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
        hitPoints = 100;
        energyPoints = 50;
        attackDamage = 20;
        std::cout << "ScavTrap " << Name << " created!" << std::endl;       
}


ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other)
{
        std::cout << "ScavTrap " << Name << " copied!" << std::endl;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
        ClapTrap::operator=(other);
        std::cout << "ScavTrap " << Name << " assigned!" << std::endl;
        return *this;
}



ScavTrap::~ScavTrap()
{
        std::cout << "ScavTrap " << Name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
        if (hitPoints == 0 || energyPoints == 0) {
                std::cout << "ScavTrap " << this->Name << " is too weak to attack!" << std::endl;
                return;
        }
        energyPoints--;
        std::cout << "ScavTrap " << Name
              << " slashes " << target
              << " for " << attackDamage << " damage!" << std::endl;
}

void ScavTrap::guardGate()
{
        std::cout << "ScavTrap " << Name << " entered Gate Keeper mode!" << std::endl;
}