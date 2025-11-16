/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 11:00:21 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/16 11:44:17 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string replace_line(std::string line, const std::string str1, const std::string str2)
{
        size_t pos = 0;
        while ((pos = line.find(str1, pos)) != std::string::npos)
        {
                line.erase(pos, str1.length());
                line.insert(pos, str2);
                pos += str2.length();
        }
        return (line);
}


int replace_file_content(char **av){

        std::string file_name = av[1];
        std::string str_1 = av[2];
        std::string str_2 = av[3];
        
        if (str_1.empty()) {
                std::cerr << "Error: s1 cannot be empty!" << std::endl;
                return (0);
        }
        if (str_2.empty()) {
                std::cerr << "Error: s2 cannot be empty!" << std::endl;
                return (0);
        }

        std::ifstream input(file_name.c_str());
        if (!input.is_open()) {
                std::cerr << "Error: cannot open file\n";
                return (0);
        }
        
        std::string new_file = file_name + ".replace";
        std::ofstream output(new_file.c_str());
        if (!output.is_open()){
                std::cerr << "Error: cannot create file" << std::endl;
                return (0);
        }
        
        std::string line;
        while (std::getline(input, line)) {
                line = replace_line(line, str_1, str_2);
                output << line << std::endl;
        }
        return (1);
        
}