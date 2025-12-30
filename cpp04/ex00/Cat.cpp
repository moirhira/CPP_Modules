#include "Cat.hpp"

Cat::Cat() {
        type = "Cat";
        std::cout << "Cat created\n";
}

Cat::Cat(const Cat& other) : Animal(other) {}

Cat& Cat::operator=(const Cat& other) {
        if (this != &other)
                Animal::operator=(other);
        return *this;
}

Cat::~Cat() {
        std::cout << "Cat destroyed\n";
}
void Cat::makeSound() const {
        std::cout << "Meow" << std::endl;
}