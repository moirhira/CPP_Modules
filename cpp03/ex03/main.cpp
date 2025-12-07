/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:07:00 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/07 12:04:20 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap d("Dia");

    d.attack("Robot");
    d.guardGate();
    d.highFivesGuys();
    d.whoAmI();

    return 0;
}



