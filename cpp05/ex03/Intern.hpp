/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:45:46 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/17 22:21:46 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &src);
	~Intern();
	
	Intern	&operator=(Intern const &src);

	Form	*makeForm(std::string &form, std::string &target);
};
