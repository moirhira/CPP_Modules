/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:21:32 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/08 21:28:30 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
        type = "WrongCat";
}

WrongCat::~WrongCat() {

}
void WrongCat::makeSound() const {
        std::cout << "Meow from WrongCat" << std::endl;
}