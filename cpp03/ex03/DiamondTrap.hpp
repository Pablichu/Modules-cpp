/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:59:41 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/30 20:39:16 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src);
	~DiamondTrap(void);

	DiamondTrap	&operator=(DiamondTrap const &src);

	void		attack(const std::string &target);
	void		whoAmI();
	std::string get_name() const;
};

std::ostream	&operator<<(std::ostream &out, DiamondTrap const &src);
