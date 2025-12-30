#include "Zombie.hpp"


int main() {
        Zombie* z = newZombie("zombie1");
        z->announce();
        delete z;
        randomChump("Foo");
}