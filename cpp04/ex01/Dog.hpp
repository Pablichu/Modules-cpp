/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:03:50 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/10 19:37:01 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_cabesa;
public:
	Dog(void);
	Dog(Dog const &src);
	~Dog(void);

	Dog	&operator=(Dog const &src);

	void		makeSound(void) const;
	void		whatThink() const;
};
