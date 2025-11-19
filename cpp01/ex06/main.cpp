/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:08:42 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/17 14:27:59 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av)
{
        if (ac == 2)
        {
                std::string command = av[1];
                if ((command != "DEBUG") && (command !=  "INFO") && (command !=  "WARNING") &&( command !=  "ERROR"))
                {
                        std::cerr << "Invalid command! \nUse : ['DEBUG', 'INFO', 'WARNING', 'ERROR']" << std::endl;
                        return (1);  
                }
                Harl harl;
                harl.complain(command);
        }
        else
        {
                std::cerr << "Usage: ./harlFilter one of ['DEBUG', 'INFO', 'WARNING', 'ERROR']" << std::endl;
                return (1); 
        }
        return (0);
}