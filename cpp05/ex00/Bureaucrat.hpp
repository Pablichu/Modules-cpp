/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:14:45 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/18 15:51:04 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
private:
	std::string const	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat const &src);

	std::string const	&getName()const;
	int const			&getGrade()const;
	void				gradeUp();
	void				gradeDown();
	void				checker();

	class GradeTooHighException : public std::exception
	{
		public:
			const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char*	what() const throw();
	};
};

std::ostream &	operator<<(std::ostream &out, Bureaucrat const &rhs);
