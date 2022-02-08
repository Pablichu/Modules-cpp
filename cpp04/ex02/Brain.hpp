/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 21:06:51 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 22:02:03 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain	&operator=(Brain const &src);

	Brain	*clone() const;
};