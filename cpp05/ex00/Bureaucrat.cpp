/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:14:42 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/09 22:54:10 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bob 720"),  _grade(150)
{
	std::cout << "So you got no documentation. Then, you are just a preset." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	
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
	try
	{
		/* code */
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Bureaucrat::gradeDown()
{
	
}

std::ostream &	operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	return (out << "[" << rhs.getName() << "]: I am " << rhs.getName() << " and my grade is " << rhs.getGrade() << "." << std::endl);
}
