#include "Animal.hpp"

Animal::Animal() : type("Animal") {
        std::cout << "Animal created\n";
}


Animal::Animal(const Animal& other) : type(other.type) {}



Animal& Animal::operator=(const Animal& other) {
        if (this != &other)
                this->type = other.type;
        return *this;
}


Animal::~Animal() {
         std::cout << "Animal destroyed\n";
}


std::string Animal::getType() const{
        return type;
}


void Animal::makeSound() const {
        std::cout << "Animal sound\n";
}

