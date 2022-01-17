/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:22:14 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/17 20:47:31 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
private:
	std::string	type;
	std::string&	typeREF;
public:
	Weapon(std::string name);
	~Weapon();

	void	setType(std::string name);
	std::string const&	getType(void);
};
