/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:46:24 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 16:52:56 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::show_contact(void) {
      std::cout << "First name: " << first_name << std::endl;
      std::cout << "Last name: " << last_name << std::endl; 
      std::cout << "Nikename: " << nickname << std::endl; 
      std::cout << "Pone number: " << darkest_secret << std::endl; 
      std::cout << "Darkest name: " << darkest_secret << std::endl; 
}

void Contact::set_first_name(std::string f_name){
        first_name = f_name;
};
void Contact::set_last_name(std::string l_name){
        last_name = l_name;
};
void Contact::set_nickname(std::string n_name){
        nickname = n_name;
};
void Contact::set_phone_number(std::string p_number){
        phone_number = p_number;
};
void Contact::set_darkest_secret(std::string d_secret){
        darkest_secret = d_secret;
};

std::string Contact::get_f_name(void)
{
        return(first_name);
};

std::string Contact::get_l_name(void)
{
        return(last_name);
};

std::string Contact::get_nickname(void)
{
        return(nickname);
};
