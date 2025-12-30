#include "Cat.hpp"

Cat::Cat() : b(new Brain()){
        type = "Cat";
        std::cout << "Cat created\n";
}


Cat::Cat(const Cat& other) : Animal(other){
        b = new Brain(*other.b);
}


Cat& Cat::operator=(const Cat& other) {
        if (this != &other)
        {
                type = other.type;
                delete b;
                b = new Brain(*other.b);
        }
        return *this; 
}


Cat::~Cat() {
        delete b;
        std::cout << "Cat destroyed\n";
}
void Cat::makeSound() const {
        std::cout << "Meow" << std::endl;
}