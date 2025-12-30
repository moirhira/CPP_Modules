#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const{
        return (type);
}

void Weapon::setType(std::string n_type){
        type = n_type;
}