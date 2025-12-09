/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:16:20 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 11:30:19 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
        for (int i = 0; i < 100; i++)
                ideas[i] = "Idea ";
        std::cout << "Brain created\n";
}


Brain::Brain(const Brain& other){
       for (int i = 0; i < 100; i++)
                ideas[i] = other.ideas[i]; 
}


Brain& Brain::operator=(const Brain& other) {
        if (this != &other)
        {
                for (int i = 0; i < 100; i++)
                        ideas[i] = other.ideas[i]; 
        }
        return *this;
}


Brain::~Brain() {
        std::cout << "Brain destroyed\n";
}