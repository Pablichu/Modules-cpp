/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:01:35 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/22 18:31:41 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	iter(T *str, int const len, void (*f)(T const &data))
{
	for (size_t i = 0; i < len; i++)
		f(str[i]);
	return ;
}

template<typename T>
void	zero(T data)
{
	data = 0;
}

template<typename T>
void	aficador(T data)
{
	data = 'a';
}

template<typename T>
void	prinIt(T data)
{
	std::cout << static_cast<T>(data); 
}
