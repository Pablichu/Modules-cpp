/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:05:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 19:38:38 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _cabesa(new Brain())
{
	std::cout << "We got a cat and remember: You mess with the Kato, you get disparato" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
}

Cat::~Cat()
{
	delete(this->_cabesa);
	std::cout << "Now it is time to plan the conquer of world ♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪" << std::endl;
}

Cat	&Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		this->_type = src._type;
		this->_cabesa = src._cabesa->clone();
	}
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << " ' Meeeooow ' *proceeds to shit in the carpet*" << std::endl;
}

void	Cat::whatThink() const
{
	std::cout << "What the cat doing?" << std::endl;
	this->_cabesa->showIdeas();
}
