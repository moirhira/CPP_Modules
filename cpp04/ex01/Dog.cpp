/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:10:26 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 12:24:05 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

