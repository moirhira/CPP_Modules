#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap c1("Clappy");
    c1.attack("Enemy");
    c1.takeDamage(5);
    c1.beRepaired(3);
    std::cout << std::endl;

    std::cout << "=== Creating ScavTrap ===" << std::endl;
    ScavTrap s1("Scavy");
    s1.attack("Intruder");
    s1.takeDamage(20);
    s1.beRepaired(10);
    s1.guardGate();
    std::cout << std::endl;

    std::cout << "=== Copy Constructor Test ===" << std::endl;
    ScavTrap s2(s1);
    s2.attack("CopyTarget");
    std::cout << std::endl;

    std::cout << "=== Assignment Operator Test ===" << std::endl;
    ScavTrap s3("AnotherOne");
    s3 = s1;
    s3.attack("AssignedTarget");
    std::cout << std::endl;

    std::cout << "=== Destroying objects ===" << std::endl;
    return 0;
}
