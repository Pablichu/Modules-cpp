/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:37:14 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/01 18:55:34 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &src);

	void		attack(std::string const &target) const;
	void		highFivesGuys(void);
};

std::ostream	&operator<<(std::ostream &out, FragTrap const &src);
