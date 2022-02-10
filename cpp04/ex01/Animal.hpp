/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:50:55 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 19:58:57 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	Animal(std::string type);
	Animal(Animal const &src);
	virtual ~Animal(void);

	Animal	&operator=(Animal const &src);

	std::string			getType(void) const;
	virtual void		makeSound(void) const;
};
