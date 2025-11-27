/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:51:28 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/27 11:27:10 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cstdlib>

float area(Point const a, Point const b, Point const c){
        return std::abs (
                a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) + 
                b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
                c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())
        );
}


bool bsp( Point const a, Point const b, Point const c, Point const point) {
        float area_0 = area(a, b, c);
        float area_1 = area(point, b, c);
        float area_2 = area(a, point, c);
        float area_3 = area(a, b, point);
        
        if (area_1 == 0 || area_2 == 0 || area_3 == 0)
                return false;
        
        return (area_0 = area_1 + area_2 + area_3);
}