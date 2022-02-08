/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:59:47 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 01:44:21 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

class MateriaSource
{
private:

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &src);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};
