#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& n_weapon){
        this->weapon = &n_weapon;
}
void HumanB::attack() const
{
        if (weapon)
                std::cout << name << " attacks with their "
                          << weapon->getType() << std::endl;
        else
                std::cout << name << " has no weapon" << std::endl;
}