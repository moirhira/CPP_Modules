#include "Zombie.hpp"


int main() {
        int N = 15;
        Zombie* z = zombieHorde(N, "Foo");
        for (int i = 0; i < N; i++){
                z[i].announce();
        }
        delete[] z;
}