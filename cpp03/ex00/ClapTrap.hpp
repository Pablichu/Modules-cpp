/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:58:44 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/25 16:11:44 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	int unsigned	_hitpoints;
	int unsigned	_energy_points;
	int unsigned	_attack_damage;

public:
	ClapTrap(void);
	ClapTrap::ClapTrap(std::string name);
	~ClapTrap();

	void	attack(std::string const &target);
	void	takeDamege(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
