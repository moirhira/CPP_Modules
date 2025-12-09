/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:18:36 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 09:10:39 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal {
        protected: 
                std::string type;
        public:
                WrongAnimal();
                WrongAnimal(const WrongAnimal& other);
                WrongAnimal& operator=(const WrongAnimal& other);
                ~WrongAnimal();
                std::string getType() const ;
                void makeSound() const;
};

#endif