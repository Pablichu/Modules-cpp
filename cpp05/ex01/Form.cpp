/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:21:18 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/15 16:21:18 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Model 202"), _signed(false), reqGrade(150), reqGradeExe(150)
{
	std::cout << "Standart form created!" << std::endl;
}

Form::Form(std::string name, int req, int exe) : _name("Model 202"), _signed(false), reqGrade(req), reqGradeExe(exe)
{
	std::cout << this->_name << " created. Required: " << this->reqGrade << " | " << this->reqGradeExe << std::endl;
}

Form::Form(Form const &src)
{
	*this = src;
}

Form::~Form()
{
	std::cout << " * " << this->_name << " has been archived *" << std::endl;
}

Form	&Form::operator=(Form const &src)
{
	if (this == &src)
		return *this;

	this->_name = src._name;
	this->_signed = src._signed;
	this->reqGrade = src.reqGrade;
	this->reqGradeExe = src.reqGradeExe;
	return *this;
}

std::ostream &	operator<<(std::ostream &out, Form const &rhs)
{
	out << "Form: ";
}
