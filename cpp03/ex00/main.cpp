#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Med");
    ClapTrap b("Bot");

    a.attack("Bot");
    b.takeDamage(0);

    a.takeDamage(5);
    a.beRepaired(3);

    b.attack("Med");
    b.beRepaired(2);

    return 0;
}