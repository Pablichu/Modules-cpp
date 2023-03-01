/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:27 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/01 19:02:12 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <queue>

class RPN
{
	private:
		std::queue<char> _notat;
	public:
		RPN();
		RPN(std::string const notation);
		RPN(RPN const &src);
		~RPN();

		RPN &operator=(RPN const &src);


};
