/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:58:44 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/24 18:02:29 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
	std::string	_Name;
	int			_Hitpoints;
	int			_Energy_points;
	int			_attack_damage;

public:
	ClapTrap(void);
	~ClapTrap();

	void	attack(std::string const &target);
	void	takeDamege(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
