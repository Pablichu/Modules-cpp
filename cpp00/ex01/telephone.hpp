/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Telephone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:51 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/17 17:19:26 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TELEPHONE_H__
#define __TELEPHONE_H__

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class Telephone
{
	private:
		int	_pos;
		Contact	contacts[8];
	public:
		Telephone(void);
		~Telephone(void);

		void	add_contact(void);
		void	show_contacts(void);
};

#endif