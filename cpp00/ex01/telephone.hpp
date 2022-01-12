/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   telephone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 23:55:51 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/12 18:00:12 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TELEPHONE_H__
#define __TELEPHONE_H__

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
		Contact(void);
		~Contact(void);

		bool	setted(void);
		void	add_contact(void);
		void	show_contact(int i);
		void	show_everything(void);
};

class Telephone
{
	private:
		int	_pos;
	public:
		Contact	contacts[8];
		Telephone(void);
		~Telephone(void);

		void	add_contact(void);
		void	show_contacts(void);
};

#endif