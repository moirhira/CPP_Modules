/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:10:29 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 11:26:00 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
        private:
                Brain *b;
        public:
                Dog();
                Dog(const Dog& other);
                Dog& operator=(const Dog& other);
                ~Dog();
                void makeSound() const;       
};

#endif