/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 21:20:58 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 09:12:16 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal {
        public: 
                WrongCat();
                ~WrongCat();
                void makeSound() const;       
};

#endif
