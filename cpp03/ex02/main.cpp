#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap clap("Clappy");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap scav("Scavy");
    scav.attack("Intruder");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\n=== Creating FragTrap ===" << std::endl;
    FragTrap frag("Froggy");
    frag.attack("Boss");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    std::cout << "\n=== Copy Constructor Test ===" << std::endl;
    FragTrap fragCopy(frag);
    fragCopy.attack("CopyTarget");
    fragCopy.highFivesGuys();

    std::cout << "\n=== Assignment Operator Test ===" << std::endl;
    FragTrap fragAssign;
    fragAssign = frag;
    fragAssign.attack("AssignedTarget");
    fragAssign.highFivesGuys();

    std::cout << "\n=== Destroying objects ===" << std::endl;
    return 0;
}

