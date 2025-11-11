/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 21:29:33 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/11 10:49:05 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>


class Contact {
        private:
                std::string  first_name;
                std::string  last_name;
                std::string  nickname;
                std::string  phone_number;
                std::string  darkest_secret;
        public:
                void set_first_name(std::string f_name);
                void set_last_name(std::string l_name);
                void set_nickname(std::string n_name);
                void set_phone_number(std::string p_number);
                void set_darkest_secret(std::string d_secret);
                void show_contact(void);
                std::string get_f_name();
                std::string get_l_name();            
                std::string get_nickname(); 
};

#endif