#include "Zombie.hpp"

Zombie::Zombie() : name("Unnamed") {}

Zombie::~Zombie(){
        std::cout << name << " deleted" << std::endl;
}

void Zombie::setName(std::string i_name) {
        name = i_name;
}

void Zombie::announce(){

        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}