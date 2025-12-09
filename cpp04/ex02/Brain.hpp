/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:16:39 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/09 11:19:50 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>


class Brain {
        private:
                std::string ideas[100];
        public:
                Brain();
                Brain(const Brain& other);
                Brain& operator=(const Brain& other);
                ~Brain();
};

#endif