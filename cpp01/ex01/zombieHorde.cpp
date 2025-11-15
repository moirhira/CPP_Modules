/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:23:41 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 17:52:40 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
        Zombie* z_array = new Zombie[N];
        for (int i = 0 ; i < N; i++){
                z_array[i].setName(name);
        }
        return (z_array);
}