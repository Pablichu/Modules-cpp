/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:26:47 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/18 01:26:47 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "Ooh noo she is back. I REPEAT: SHE IS BACK!" << std::endl;
}

Karen::~Karen()
{
	std::cout << "Finally she is gone! :D" << std::endl;
}

void	Karen::complain(std::string level)
{
	std::cout << level << std::endl;
	void	(Karen::*level(void))(void); //this does not work
}

void	Karen::debug(void)
{
	std::cout << "I'll have two number 9s, a number 9 large," << std::endl
			  << "a number 6 with extra dip, a number 7, two number 45s," << std::endl
			  << "one with cheese, and a large soda." << std::endl;
}

void	Karen::info(void)
{
	std::cout << "We already know that this burguers are not like in photos." << std::endl
			  << "At least you should try. Less people would be dissapointed."  << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I know about the Burger King foot lettuce incident. So, you"  << std::endl
			  << "mustn't put any lettuce in my burgers!!" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "Goddamit! Nobody deserve to have ketchup and mayonnaise mixed!" << std::endl
			  << "I am not passing throuht this. You have lost your best client." << std::endl;
}
