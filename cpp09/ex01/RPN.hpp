/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:27 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/08 20:02:52 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <cstring>

typedef struct{
	float	nb;
	char	simbol;
	bool	which;
} t_next;

class RPN
{
	private:
		std::stack<float> _notat;
		t_next next;

		std::string	oriNotat;

		void	_notationChecker() const;
		void	_calculateRPN();

		void	_extractNext(std::string & nt);
		void	_calcIt();

	public:
		RPN();
		RPN(std::string const notation);
		RPN(RPN const &src);
		~RPN();

		RPN &operator=(RPN const &src);

		const std::string	&getNotation() const;
};
