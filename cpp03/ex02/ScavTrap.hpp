/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:07:32 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/01 18:55:34 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool	_keeper_mode;
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &src);

	void	attack(std::string const &target) const;
	void	guardGate(void);
};

std::ostream	&operator<<(std::ostream &out, ScavTrap const &src);
