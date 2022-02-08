/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:24:18 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 01:53:54 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const &src);
	~Ice(void);

	Ice	&operator=(Ice const &src);

	AMateria*	clone() const;
	void		use(ICharacter& target);
};

