/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:10:24 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 11:02:17 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
        private:
                Brain *b;
        public: 
                Cat();
                Cat(const Cat& other);
                Cat& operator=(const Cat& other);
                ~Cat();
                void makeSound() const;       
};

#endif