/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:21:32 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 10:10:53 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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