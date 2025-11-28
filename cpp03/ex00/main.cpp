/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 14:07:00 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/28 11:35:35 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Med");
    ClapTrap b("Bot");

    a.attack("Bot");
    b.takeDamage(0);

    a.takeDamage(5);
    a.beRepaired(3);

    b.attack("Med");
    b.beRepaired(2);

    return 0;
}