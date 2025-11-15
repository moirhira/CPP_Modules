/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:04:28 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 17:13:58 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string i_name) : name(i_name) {}

Zombie::~Zombie(){
        std::cout << name << " deleted" << std::endl;
}


void Zombie::announce(){

        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}