/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:51:28 by moirhira          #+#    #+#             */
/*   Updated: 2025/12/24 19:39:33 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed abs_fixed(Fixed x)
{
        if (x < 0)
                return x * -1;
        return x;
}

Fixed area(Point const a, Point const b, Point const c)
{
        Fixed term1 = a.getX() * (b.getY() - c.getY());
        Fixed term2 = b.getX() * (c.getY() - a.getY());
        Fixed term3 = c.getX() * (a.getY() - b.getY());
        
        return abs_fixed(term1 + term2 + term3);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
        Fixed area_ABC = area(a, b, c);
        Fixed area_PBC = area(point, b, c);
        Fixed area_APC = area(a, point, c);
        Fixed area_ABP = area(a, b, point);

        if (area_PBC == 0 || area_APC == 0 || area_ABP == 0)
                return false;
        
        return (area_ABC == area_PBC + area_APC + area_ABP);
}
