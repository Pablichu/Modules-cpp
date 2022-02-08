/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:24:18 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 01:53:54 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(Cure const &src);
	~Cure(void);

	Cure	&operator=(Cure const &src);

	std::string const & getType() const;
	AMateria*			clone() const;
	void				use(ICharacter& target);
};
