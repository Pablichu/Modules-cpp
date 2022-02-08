/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 00:59:47 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 18:19:13 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "IMateriaSource.hpp"

#define MAX_MATERIAS 2

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_sources[MAX_MATERIAS];
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &src);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};
