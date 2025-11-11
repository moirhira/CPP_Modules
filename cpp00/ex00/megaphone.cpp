/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 13:49:48 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/09 15:43:29 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char **av) {
        if (ac < 2)
                std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        else
        {
                for (int i = 1; i < ac; i++)
                {
                        for (int j = 0; av[i][j]; j++)
                        {
                                std::cout << (char)toupper(av[i][j]);
                        }
                }
                std::cout << std::endl;
        }
        return (0);
}