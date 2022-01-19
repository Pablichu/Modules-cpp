/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 01:26:47 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/18 19:38:36 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	this->_mode[0] = "DEBUG";
	this->_mode[1] = "INFO";
	this->_mode[2] = "WARNING";
	this->_mode[3] = "ERROR";
	
	this->fPTR[0] = &Karen::debug;
	this->fPTR[1] = &Karen::info;
	this->fPTR[2] = &Karen::warning;
	this->fPTR[3] = &Karen::error;
}

Karen::~Karen(){}

void	Karen::complain(std::string level)
{
	size_t	i = 0;

	while (i < 4)
	{
		if (!this->_mode[i].compare(level))
			break ;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*fPTR[i])();
			i++;
		case 1:
			(this->*fPTR[i])();
			i++;
		case 2:
			(this->*fPTR[i])();
			i++;
		case 3:
			(this->*fPTR[i])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break;
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I'll have two number 9s, a number 9 large, a number 6" << std::endl
			  << "with extra dip, a number 7, two number 45s, one with cheese," << std::endl
			  << "and a large soda." << std::endl << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "We already know that this burguers are not like in photos." << std::endl
			  << "At least you should try. Less people would be dissapointed." << std::endl << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I know about the Burger King foot lettuce incident. So, you"  << std::endl
			  << "mustn't put any lettuce in my burgers!!" << std::endl << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Goddamit! Nobody deserve to have ketchup and mayonnaise mixed!" << std::endl
			  << "I am not passing throuht this. You have lost your best client." << std::endl << std::endl;
}
