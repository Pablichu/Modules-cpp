/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:41:21 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 18:40:19 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MateriaSource.hpp"
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;
	AMateria(void);
public:
	AMateria(std::string const & type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);

	AMateria	&operator=(AMateria const &src);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
