/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:53:39 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/13 21:48:16 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
private:
	std::string	_zname;

public:
	Zombie(std::string zname);
	Zombie(void);
	~Zombie();

	void	announce( void );
	void	zom_name(std::string const zname);
};
