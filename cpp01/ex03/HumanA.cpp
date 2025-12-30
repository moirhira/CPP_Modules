#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& n_weapon) : name(name), weapon(n_weapon) {}

void HumanA::attack() const{
        std::cout << name 
                  << " attacks with their "
                  << weapon.getType()
                  << std::endl;
}