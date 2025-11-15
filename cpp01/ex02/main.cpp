/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:56:00 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/15 18:40:22 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>





int main()
{
        
        std::string str1 = "HI THIS IS BRAIN";

        std::string *stringPTR = &str1;

        std::string &stringREF =  str1;
        

        std::cout  << &str1 << std::endl;
        std::cout  << stringPTR << std::endl;
        std::cout  << &stringREF << std::endl;
        
        std::cout  << str1 << std::endl;
        std::cout  << *stringPTR << std::endl;
        std::cout  << stringREF << std::endl;
        
        return (0);
}

