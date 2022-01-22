/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:09:55 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/22 20:55:30 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

bool	isNumber(const std::string str)
{
    for (int i = 0; i < str.length(); i++)
        if (std::isdigit(str[i]) == 0 && str[i] != '-')
			return false;
    return true;
}

int main(int ar, char **argv)
{
	const Point		a(0, 0);
	const Point		b(2, 0);
	const Point		c(1, 2);
	const Point		point(1.7, 1);

	
	if (bsp(a, b, c, point))
		std::cout << "The point is actually inside triangule!" << std::endl;
	else
		std::cout << "The point is not inside triangule" << std::endl;
	return 0;
}

