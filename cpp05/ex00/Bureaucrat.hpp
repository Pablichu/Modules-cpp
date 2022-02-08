/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:14:45 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 22:16:02 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Bureaucrat
{
private:
	/* data */
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat const &src);
};

