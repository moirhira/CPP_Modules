#include "WrongCat.hpp"

WrongCat::WrongCat() {
        std::cout << "WrongCat created\n";
        type = "WrongCat";
}

WrongCat::~WrongCat() {
        std::cout << "WrongCat destroyed\n";
}

void WrongCat::makeSound() const {
        std::cout << "Meow from WrongCat" << std::endl;
}