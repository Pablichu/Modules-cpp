/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movistar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 21:23:29 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/04 21:23:29 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "telephone.hpp"

void	Telephone::add_contact()
{
	contacts[this->pos].add_contact();
	this->pos++;
	if (this->pos == 8)
		this->pos = 0;
}



void	Telephone::show_contacts()
{
	int	who;

	std::cout << std::setw(10) << "Index" << "|First name| Last name|  Nickname" << std::endl;  
	for (size_t i = 0; i < 8 && contacts[i].setted(); i++)
		contacts[i].show_contact(i);
	std::cout << "From whom you want the info? Tell me index!" << std::endl << "<";
	std::cin >> who;
	if (who < 1 && who > 8) //Better not integer
	{
		std::cout << "Not valid entry >:(" << std::endl;
		return ;
	}
	contacts[who - 1].show_everything();
}
