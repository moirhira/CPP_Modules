#include "Zombie.hpp"

Zombie::Zombie(std::string i_name) : name(i_name) {}

Zombie::~Zombie(){
        std::cout << name << " deleted" << std::endl;
}


void Zombie::announce(){

        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}