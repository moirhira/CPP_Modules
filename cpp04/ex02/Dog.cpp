#include "Dog.hpp"


Dog::Dog() : b(new Brain()){
        type = "Dog";
        std::cout << "Dog created\n";
}

Dog::Dog(const Dog& other) : Animal(other) {
    b = new Brain(*other.b);
}


Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        type = other.type;
        delete b;
        b = new Brain(*other.b);
    }
    return *this;
}


Dog::~Dog() {
        delete b;
        std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const {
        std::cout << "Woof" << std::endl;
}

