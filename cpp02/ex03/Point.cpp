/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moirhira <moirhira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:51:25 by moirhira          #+#    #+#             */
/*   Updated: 2025/11/27 10:54:31 by moirhira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float f_x, const float f_y) : x(f_x), y(f_y) {}

Point::Point(const Point& other) : x(other.x) , y(other.y) {}

Point &Point::operator=(const Point& other) {
        (void)other;
        return *this;
}

Point::~Point() {};

Fixed Point::getX() const{
        return x; 
}


Fixed Point::getY() const{
        return y;
}