/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:29:13 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/24 12:47:50 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned			_size;
	std::vector<int>	_nbs;
public:
	Span(void);
	Span(int const &n);
	Span(Span const &src);
	~Span(void);

	Span	&operator=(Span const &src);
	void	addNumber(int newNb);
	void	addNumber();
	int		shortestSpan();
	int		longestSpan();

	class FullException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NoValuesException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
