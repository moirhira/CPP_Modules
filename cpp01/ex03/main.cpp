/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:12:26 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 22:43:33 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int main(){
        Weapon ak("AK47");

        HumanA simo("simo", ak);
        simo.attack();
        ak.setType("AK48");
        simo.attack();
        
        HumanB salma("salma");
        salma.attack();
        
        Weapon katana("katana");
        salma.setWeapon(katana);
        salma.attack();
        katana.setType("katana chinese");
        salma.attack();
}