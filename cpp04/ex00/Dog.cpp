#include "Dog.hpp"


Dog::Dog() {
        std::cout << "Dog created\n";
        type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {}

Dog& Dog::operator=(const Dog& other) {
        if (this != &other)
                Animal::operator=(other);
        return *this;
}

Dog::~Dog() {
        std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const {
        std::cout << "Woof" << std::endl;
}

