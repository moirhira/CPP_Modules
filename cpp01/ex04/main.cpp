/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 10:45:31 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/16 11:20:41 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av){
        if (ac == 4)
        {
                if (!replace_file_content(av))
                        return (1);
        }
        else
        {
                std::cerr << "Usage: ./replace filename s1 s2" << std::endl;
                return (1);
        }
        return(0);
}