/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:44:56 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 22:06:15 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& n_weapon) : name(name), weapon(n_weapon) {}

void HumanA::attack() const{
        std::cout << name 
                  << " attacks with their "
                  << weapon.getType()
                  << std::endl;
}