/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:58:29 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/27 11:22:35 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP


#include "Fixed.hpp"


class Point {
        private:
                Fixed const x;
                Fixed const  y;
        public:
                Point();
                Point(const float f_x, const float f_y);
                Point(const Point& other);
                Point &operator=(const Point& other);
                ~Point();
                
                Fixed getX() const;
                Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif