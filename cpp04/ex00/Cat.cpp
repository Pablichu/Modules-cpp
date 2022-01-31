/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:05:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/31 22:19:50 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	Animal("Cat");
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Now it is time to plan the conquer of world ♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪" << std::endl;
}

Cat	&Cat::operator=(Cat const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << " ' Meeeooow ' *proceeds to shit in the carpet*" << std::endl;
}
