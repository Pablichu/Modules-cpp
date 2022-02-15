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

#include <iostream>

class Form
{
private:
	std::string	_name;
	bool	_signed;
	int		reqGrade;
	int		reqGradeExe;
public:
	Form();
	Form(std::string name, int req, int exe);
	Form(Form const &src);
	~Form();

	Form	&operator=(Form const &src);
};

std::ostream &	operator<<(std::ostream &out, Form const &rhs);
