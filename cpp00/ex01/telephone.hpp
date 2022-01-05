/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   telephone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:51 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/05 18:53:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef telephonehpp
#define telefphonehpp

#include <string>
#include <iostream>
#include <iomanip>

class	Contact
{
	private:
		bool set;
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_nb;
		std::string	dark_secret;
	
	public:
		Contact();
		~Contact();

		bool	setted();
		void	add_contact();
		void	show_contact(int i);
		void	show_everything();
};

class Telephone
{
	private:
		int	pos;
	public:
		Contact	contacts[8];
		Telephone();
		~Telephone();

		void	add_contact();
		void	show_contacts();
};

#endif