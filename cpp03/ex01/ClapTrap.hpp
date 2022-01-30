/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:58:44 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/30 20:24:31 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	int unsigned	_hitpoints;
	int unsigned	_energy_points;
	int unsigned	_attack_damage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &src);

	void	attack(std::string const &target);
	void	takeDamege(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		get_name(void) const;
	unsigned		get_hitpoints(void) const;
	unsigned		get_energy(void) const;
	unsigned		get_attackdm(void) const;
};

std::ostream	&operator<<(std::ostream &out, ClapTrap const &src);
