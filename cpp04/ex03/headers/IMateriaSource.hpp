/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 21:44:10 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 02:18:30 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MateriaSource.hpp"

class IMateriaSource
{
public:
	virtual				~IMateriaSource() {}
	virtual void 		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};
