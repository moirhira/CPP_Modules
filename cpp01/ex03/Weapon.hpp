/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:45:29 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 22:00:02 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
        private:
                std::string type;
        public:
                Weapon(std::string type);
                const std::string& getType() const ;
                void setType(std::string n_type);
};



#endif