#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
        std::cout << "WrongAnimal created\n";
}


WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
        if (this != &other)
                this->type = other.type;
        return *this;
}


WrongAnimal::~WrongAnimal() {
        std::cout << "WrongAnimal destroyed\n";
}


std::string WrongAnimal::getType() const{
        return type;
}


void WrongAnimal::makeSound() const {
        std::cout << "WrongAnimal sound\n";
}

