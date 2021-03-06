/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:01:35 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/02/23 17:08:40 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void	iter(T *str, int const len, void (*f)(T const &data))
{
	for (int i = 0; i < len; i++)
		f(str[i]);
	return ;
}

template<typename T>
void	prinIt(T const &data)
{
	std::cout << static_cast<T>(data); 
}

template<typename T>
void	aficador(T const &data)
{
	if (data == 'e' || data == 'i' || data == 'o' || data == 'u')
		prinIt('a');
	else
		prinIt(data);
}
