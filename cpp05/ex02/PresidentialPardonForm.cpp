/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:36:14 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/16 21:50:46 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _target("Afganistan"), Form()
{

	std::cout << "Presidential Pardon form has been created by standart properties." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : _target(target)
{
	std::cout << "Presidential Pardon form has been created for " << this->_target << "." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << " * Your president form has been keeped in a safe box *" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : _target(src._target)
{
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

void	PresidentialPardonForm::proceed() const
{
	std::cout << this->_target << " has been pardoned by Obama s̴̖̉̿̂̽ŭ̵̲͎̗̝̼̉̄̀̚r̵̳͓͆̄̆̀͠n̴̝̼͚̤̅̇̐̏͛̏ͅa̶̹̰̲̳̓̆͋̑͜͝m̴̨̫̳͎͔̩̓̊̓̇́ę̴̧̛̤̹̫̙͐̈." << std::endl;
}
