/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:06:57 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/07 21:25:42 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Now we thinking bro!" << std::endl;
	this->_ideas[0] = "eat";
	this->_ideas[1] = "sleep";
	this->_ideas[2] = "fuck";
	this->_ideas[3] = "shit";
	this->_ideas[4] = "repeat";
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain::~Brain()
{
	std::cout << "No brain no pain." << std::endl;
}

Brain	&Brain::operator=(Brain const &src)
{
	if (this != &src)
	{
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return *this;
}
