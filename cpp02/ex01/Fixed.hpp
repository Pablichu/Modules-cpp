/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:17 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/22 00:21:30 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
	int					_value;
	static int const	_FBIT;

public:
	Fixed(void);							//canonical
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(Fixed const &src);				//canonical
	~Fixed(void);							//canonical

	Fixed	&operator=(Fixed const &rhs);	//canonical

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &	operator<<(std::ostream &out, Fixed const &rhs);
