/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:07:17 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 11:18:42 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {
        protected: 
                std::string type;
        public:
                Animal();
                virtual ~Animal();
                Animal(const Animal& other);
                Animal& operator=(const Animal& other);
                
                std::string getType() const ;
                virtual void makeSound() const;
};

#endif