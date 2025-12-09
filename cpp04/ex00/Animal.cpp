/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:07:51 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/08 12:01:48 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {}


Animal::Animal(const Animal& other) : type(other.type) {}


Animal& Animal::operator=(const Animal& other) {
        if (this != &other)
                this->type = other.type;
        return *this;
}


Animal::~Animal() {
}


std::string Animal::getType() const{
        return type;
}


void Animal::makeSound() const {
        std::cout << "Animal sound\n";
}

