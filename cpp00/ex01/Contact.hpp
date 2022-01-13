/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:13:13 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/13 18:13:41 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
