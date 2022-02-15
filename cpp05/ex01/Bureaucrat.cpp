/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:14:42 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/15 20:54:17 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bob 720"),  _grade(150)
{
	std::cout << "So you got no documentation. Then, you are just a preset." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	this->checker();
	std::cout << "You have been admitted by the ministry of consumption. " << this->_name << " / " << this->_grade << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "* The court has close. If you need to do a process, please use CLAVE to ask for a session. *" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src)
		this->_grade = src._grade;
	return *this;
}

std::string const	&Bureaucrat::getName()const
{
	return this->_name;
}

int const	&Bureaucrat::getGrade()const
{
	return this->_grade;
}

void	Bureaucrat::gradeUp()
{
	this->_grade--;
	this->checker();
}

void	Bureaucrat::gradeDown()
{
	this->_grade++;
	this->checker();
}

void	Bureaucrat::checker()
{
	if (this->_grade < 1)
	{
		this->_grade = 1;
		throw GradeTooHighException();
	}
	else if (this->_grade > 150)
	{
		this->_grade = 150;
		throw GradeTooLowException();
	}
}

bool	Bureaucrat::signForm(Form const &src) const
{
	if (this->_grade > src.getreqGrade())
	{
		std::cout << this->_name << " have too low grade to sign " << src.getNameF() << std::endl;
		return false;
	}
	std::cout << this->_name << " have signed " << src.getNameF() << std::endl;
	return true;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (" -> You cannot exceed grade up of 1.");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (" -> Your grade cannot be down of 150.");
}

std::ostream &	operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	return (out << "[" << rhs.getName() << "]: I am " << rhs.getName() << " and my grade is " << rhs.getGrade() << "." << std::endl);
}
