/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:05:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/02 20:58:02 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "We got a wrong cat." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "Now it is time to plan the conquer of world ♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	if (this != &src)
		this->_type = src._type;
	return *this;
}

void		WrongCat::makeSound(void) const
{
	std::cout << " ' Meeeooow ' *proceeds to shit in the carpet*" << std::endl;
}
