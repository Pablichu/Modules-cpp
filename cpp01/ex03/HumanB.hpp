/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:32:51 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/14 20:49:17 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	std::string const	*_my_gun;
public:
	HumanB(std::string hname);
	~HumanB();

	void	setWeapon(Weapon violence_tool);
	void	attack() const;
};