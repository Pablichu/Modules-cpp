/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:20:19 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/16 21:56:19 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _target("Afganistan"), Form("Model 060", 145, 137)
{
	std::cout << "Presidential Pardon form has been created by standart properties." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : _target(target), Form("Model 060", 145, 137)
{
	std::cout << "Presidential Pardon form has been created for " << this->_target << "." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " * Your president form has been keeped in a safe box *" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

void	ShrubberyCreationForm::proceed() const
{
	std::cout << "PASAPALABRA" << std::endl;
}
