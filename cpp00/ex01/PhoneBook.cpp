/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:46:27 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 17:16:40 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int PhoneBook::index = 0;

void PhoneBook::ADD()
{
        std::string var_cmd;
        
        std::cout << "please enter the  first name: ";
        std::getline(std::cin, var_cmd);
        contacts[index].set_first_name(var_cmd);

        std::cout << "please enter the last name: ";
        std::getline(std::cin, var_cmd);
        contacts[index].set_last_name(var_cmd);

        std::cout << "please enter the  nickname: ";
        std::getline(std::cin, var_cmd);
        contacts[index].set_nickname(var_cmd);

        std::cout << "please enter the  phone number: ";
        std::getline(std::cin, var_cmd);
        contacts[index].set_phone_number(var_cmd);

        std::cout << "please enter the  darkest secret: ";
        std::getline(std::cin, var_cmd);
        contacts[index].set_darkest_secret(var_cmd);

        index = (index + 1) % 8;
}

std::string format_string(std::string str)
{
        if (str.length() > 10)
                return (str.substr(0, 9) + '.');
        return str;
}

void PhoneBook::SEARCH()
{
        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        for (int i = 0; i < 8; i++)
        {
                if (!contacts[i].get_f_name().empty())
                {
                        std::cout <<  "|" << std::setw(10) << i + 1 << "|";
                        std::cout <<  std::setw(10) << format_string(contacts[i].get_f_name()) << "|";
                        std::cout <<  std::setw(10) << format_string(contacts[i].get_l_name()) << "|";
                        std::cout <<  std::setw(10) << format_string(contacts[i].get_nickname()) << "|" << std::endl;
                }
        }
        std::cout << std::endl;
        int ind;
        std::cout << "Select index [1-8]: ";
        if(!(std::cin >> ind))
        {
                std::cout << "Invalid input !\n";
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                return ;
        }
        std::cin.ignore();
        if (ind < 1 || ind > 8 || contacts[ind - 1].get_f_name().empty())
        {
                std::cout << "Invalid index!\n";
                return;
        }
        contacts[ind - 1].show_contact();       
}