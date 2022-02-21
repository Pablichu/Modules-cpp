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
#include "Bureaucrat.hpp"

Form::Form() : _name("Model 202"), _signed(false), _reqGrade(150), _reqGradeExe(150)
{
	std::cout << "Standart form created!" << std::endl;
}

Form::Form(std::string name, int req, int exe) : _name(name), _signed(false), _reqGrade(req), _reqGradeExe(exe)
{
	std::cout << this->_name << " created. Required: " << this->_reqGrade << " | " << this->_reqGradeExe << std::endl;
	if (this->_reqGrade > 150 || this->_reqGradeExe > 150)
		throw GradeTooLowException();
	else if (this->_reqGrade < 1 || this->_reqGradeExe < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _reqGrade(src._reqGrade), _reqGradeExe(src._reqGradeExe)
{
	std::cout << this->_name << " created. Required: " << this->_reqGrade << " | " << this->_reqGradeExe << "." << std::endl;
}

Form::~Form()
{
	std::cout << " * " << this->_name << " has been archived *" << std::endl;
}

Form	&Form::operator=(Form const &src)
{
	if (this == &src)
		return *this;
	this->_signed = src._signed;
	return *this;
}

void	Form::checker()
{
	if (this->_reqGrade > 150 || this->_reqGradeExe > 150)
		throw GradeTooLowException();
	else if (this->_reqGrade < 1 || this->_reqGradeExe < 1)
		throw GradeTooHighException();
}

std::string const	&Form::getNameF() const
{
	return this->_name;
}

bool		Form::isSigned() const
{
	return this->_signed;
}

int			Form::getreqGrade() const
{
	return this->_reqGrade;
}

int		 	Form::getreqGradeExe() const
{
	return this->_reqGradeExe;
}

void		Form::beSigned(Bureaucrat const &bob)
{
	if (!bob.signForm(*this))
		throw GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!executor.executeForm(*this) || !this->_signed)
	{
		if (this->_signed)
			throw FormNotSigned();
		else
			throw GradeTooLowException();
		return ;
	}
	this->proceed();
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return (" -> Everything has a limit. Surpassing grade 1 is one of them. Back off!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return (" -> Too low grade");
}

const char*	Form::FormNotSigned::what() const throw()
{
	return (" -> This form is not signed");
}


std::ostream &	operator<<(std::ostream &out, Form const &rhs)
{
	if (rhs.isSigned())
		out << "[✅] -> Form: " << rhs.getNameF() << ". Required grade: " << rhs.getreqGrade() << " | " << rhs.getreqGradeExe();
	else
		out << "[❌] -> Form: " << rhs.getNameF() << ". Required grade: " << rhs.getreqGrade() << " | " << rhs.getreqGradeExe();
	return out;
}
