/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:45:30 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 17:16:43 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H


#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>


class PhoneBook {
        private:
                static int index;
                Contact contacts[8];
        public:
                void ADD(void);
                void SEARCH(void);
};


#endif