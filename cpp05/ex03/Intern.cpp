/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:45:44 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/17 22:43:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define NB_FORM 3

Intern::Intern()
{
	std::cout << " <<New intern admited>>" << std::endl;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{
	std::cout << " * Intern went on holidays. It is August! *" << std::endl;
}

Intern	&Intern::operator=(Intern const &src)
{
	(void)src;
	return *this;
}

Form	*Intern::makeForm(std::string &form, std::string &target)
{
	const std::string	_request[NB_FORM] = {"shrubbery", "robotomy", "pardon"};
	Form	*_forms[NB_FORM];

	_forms[0] = new ShrubberyCreationForm(target);
	_forms[1] = new	RobotomyRequestForm(target);
	_forms[2] = new PresidentialPardonForm(target);
	size_t i = 0;
	while(i < NB_FORM)
	{
		if (form == _request[i])
			break ;
		i++;
	}
	switch (i)
	{
	case 0:
		delete(_forms[1]);
		delete(_forms[2]);
		return _forms[0];
		break;
	case 1:
		delete(_forms[0]);
		delete(_forms[2]);
		return _forms[1];
		break;
	case 2:
		delete(_forms[0]);
		delete(_forms[1]);
		return _forms[2];
		break;
	default:
		delete(_forms[0]);
		delete(_forms[1]);
		delete(_forms[2]);
		Form *null = NULL;
		return null;
		break;
	}
}
