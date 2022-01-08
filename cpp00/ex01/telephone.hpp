/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   telephone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:51 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/08 12:36:42 by pmira-pe         ###   ########.fr       */
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
		bool _set;
		std::string	_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_nb;
		std::string	_dark_secret;
	
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
		int	_pos;
	public:
		Contact	contacts[8];
		Telephone();
		~Telephone();

		void	add_contact();
		void	show_contacts();
};

#endif