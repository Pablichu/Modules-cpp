/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 02:05:56 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/08 02:25:36 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "MateriaSource.hpp"

typedef struct s_bag
{
	AMateria	*materia;
	bool		setted;
}		t_bag;

class Character
{
private:
	std::string	_name;
	t_bag	my_bag[4];	
public:
	Character(void);
	Character(std::string name);
	Character(Character const &src);
	~Character(void);

	Character	&operator=(Character const &src);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
