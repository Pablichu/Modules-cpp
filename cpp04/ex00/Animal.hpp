/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:50:55 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/30 21:22:09 by pmira-pe         ###   ########.fr       */
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
	~Animal(void);

	Animal	&operator=(Animal const &src);

	std::string	get_type(void) const;
};


