/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 21:00:07 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 22:12:17 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
        private:
                std::string name;
                Weapon* weapon;
        public:
                HumanB(std::string name);
                void setWeapon(Weapon& n_weapon);
                void attack() const;
};

#endif