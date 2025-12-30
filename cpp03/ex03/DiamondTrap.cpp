#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ()
        : ClapTrap("NULL_clap_Name"),FragTrap(), ScavTrap(), Name("NULL")
{
        this->hitPoints = FragTrap::hitPoints;
        this->energyPoints = ScavTrap::energyPoints;
        this->attackDamage = FragTrap::attackDamage;
        std::cout << "DiamondTrap default constructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const std::string&  name)
        : ClapTrap( name + "_clap_Name"), FragTrap(name), ScavTrap(name), Name(name)
{
        this->hitPoints = FragTrap::hitPoints;
        this->energyPoints = ScavTrap::energyPoints;    
        this->attackDamage = FragTrap::attackDamage;
        std::cout << "DiamondTrap " << Name << " constructed" << std::endl;       
}


DiamondTrap::DiamondTrap(const DiamondTrap& other) 
        : ClapTrap(other.ClapTrap::Name), FragTrap(other), ScavTrap(other), Name(other.Name)
{
        
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        std::cout << "DiamondTrap copy constructor called" << std::endl;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
        if (this != &other)
        {
                ClapTrap::Name = other.ClapTrap::Name;
                this->Name  = other.Name;
                this->hitPoints = other.hitPoints;
                this->energyPoints = other.energyPoints;
                this->attackDamage = other.attackDamage;
        }
        return *this;
}



DiamondTrap::~DiamondTrap()
{
        std::cout << "DiamondTrap " << Name << " destroyed!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
        ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
        std::cout << "DiamondTrap Name: " << Name << std::endl;
        std::cout << "ClapTrap Name: " << ClapTrap::Name << std::endl;
}