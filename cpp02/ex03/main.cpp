/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:58:24 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/24 19:39:03 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(0, 2);
    Point c(3, 0);

    Point inside(1, 1);
    Point outside(20, 20);
    Point onEdge(1, 0);

    std::cout << "inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "outside: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "onEdge: " << bsp(a, b, c, onEdge) << std::endl;

    return 0;
}