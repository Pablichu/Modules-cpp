/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:58 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/15 14:39:58 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_reqGrade;
	const int			_reqGradeExe;
public:
	Form();
	Form(std::string name, int req, int exe);
	Form(Form const &src);
	~Form();

	Form	&operator=(Form const &src);

	void				checker();
	std::string const	&getNameF() const;
	bool				isSigned() const;
	int					getreqGrade() const;
	int				 	getreqGradeExe() const;
	void				beSigned(Bureaucrat &bob);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
};

std::ostream &	operator<<(std::ostream &out, Form const &rhs);
