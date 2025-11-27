/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:58:24 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/27 11:27:28 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
        Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(3, 3);
    Point outside(20, 20);
    Point onEdge(5, 0);

    std::cout << "inside: " << bsp(a, b, c, inside) << std::endl;
    std::cout << "outside: " << bsp(a, b, c, outside) << std::endl;
    std::cout << "onEdge: " << bsp(a, b, c, onEdge) << std::endl;

    return 0;
}