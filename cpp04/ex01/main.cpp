/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:12:49 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 11:29:23 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

        const Animal *j = new Dog();
        const Animal *i = new Cat();
        delete j; // should not create a leak
        delete i;

        

        Animal *animals[6];

        for (int i = 0; i < 6; i++)
        {
                if (i < 3)
                        animals[i] = new Dog();
                else
                        animals[i] = new Cat();
        }

        for (int i = 0; i < 6; i++)
                delete animals[i];

        Dog basic;
        Dog copy = basic;

        return 0;
}
