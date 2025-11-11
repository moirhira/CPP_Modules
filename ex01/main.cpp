/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 22:30:31 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/11 11:31:49 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"



int main()
{
    PhoneBook phonebook;
    std::string cmd;
    
    std::cout << "Welcom! Commands Availble (ADD, SEARCH, EXIT)\n";
    while (1)
    {
        std::cout << "Enter command > ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
            phonebook.ADD();
        else if (cmd == "SEARCH")
            phonebook.SEARCH();
        else if (cmd == "EXIT")
            break;
    }
    return (0);
}

