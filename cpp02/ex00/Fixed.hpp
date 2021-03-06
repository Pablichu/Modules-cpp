/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:17 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/21 23:50:37 by pmira-pe         ###   ########.fr       */
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
	Fixed(Fixed const &src);				//canonical
	~Fixed(void);							//canonical

	Fixed	&operator=(Fixed const &rhs);	//canonical

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
