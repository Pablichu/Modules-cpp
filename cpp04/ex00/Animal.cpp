/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:51:54 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/30 21:16:54 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
}

Animal::Animal(std::string type) : _type(type)
{

}

Animal::Animal(Animal const &src)
{
	
}

Animal::~Animal()
{
}

Animal	&Animal::operator=(Animal const &src)
{

}

std::string	Animal::get_type(void) const
{

}
