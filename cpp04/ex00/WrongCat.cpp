#include "WrongCat.hpp"

WrongCat::WrongCat() {
        type = "WrongCat";
        std::cout << "WrongCat created\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {}

WrongCat& WrongCat::operator=(const WrongCat& other) {
        if (this != &other)
                WrongAnimal::operator=(other);
        return *this;
}

WrongCat::~WrongCat() {
        std::cout << "WrongCat destroyed\n";
}

void WrongCat::makeSound() const {
        std::cout << "Meow from WrongCat" << std::endl;
}