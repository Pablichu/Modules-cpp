/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:35:27 by pmira-pe          #+#    #+#             */
/*   Updated: 2023/03/04 00:05:10 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

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

		void	_notationChecker(std::string const notation) const;
		void	_calculateRPN(std::string const notation);

		void	_extractNext(std::string & nt);
		void	_calcIt();

	public:
		RPN();
		RPN(std::string const notation);
		RPN(RPN const &src);
		~RPN();

		RPN &operator=(RPN const &src);

		void	newCalculation(std::string const notation);
};
