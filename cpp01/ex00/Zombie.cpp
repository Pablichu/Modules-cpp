/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:00:05 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/13 20:34:36 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zname)
{
	this->_zname = zname;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_zname << " says: IF NO BRAIN THEN GONE" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_zname << "  BraiiiiiiinnnzzzZ..." << std::endl;
}
