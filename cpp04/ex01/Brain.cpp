/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:06:57 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/02 21:35:25 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	Brain("Brain not identified");
}

Brain::Brain(Brain const &src)
{
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Forced to wipe." << std::endl;
}

Brain	&Brain::operator=(Brain const &src)
{
	if (this != &src)
		this->_ideas = src._ideas;
	return *this;
}
