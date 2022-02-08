/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 01:00:39 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 18:33:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MAX_MATERIAS; i++)
		if (this->_sources[i])
			delete(this->_sources[i]);
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)//Needs previous free
{
	if (this != &src)
	{
		for (int i = 0; i < MAX_MATERIAS; i++)
			this->_sources[i] = src._sources[i]->clone();
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria *newSource)
{
	for (int i = 0; i < MAX_MATERIAS; i++)
	{
		if (!this->_sources[i])
		{
			this->_sources[i] = newSource;
			return ;
		}
	}

	std::cout << " -> You exceded the max types of materias." << std::endl;	
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIAS; i++)
		if (this->_sources[i]->getType() == type)
			return this->_sources[i]->clone();

	std::cout << " -> There is not " << type << " in materia source." << std::endl;
	return NULL;
}
