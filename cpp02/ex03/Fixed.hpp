/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:17 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/22 15:18:02 by pmira-pe         ###   ########.fr       */
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
	
	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;
	
	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;
	
	Fixed	operator++(void);
	Fixed	operator--(void);

	Fixed	operator++(int);
	Fixed	operator--(int);
	

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed	&max(Fixed &a, Fixed &b);
	static Fixed	&min(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
};

std::ostream &	operator<<(std::ostream &out, Fixed const &rhs);
