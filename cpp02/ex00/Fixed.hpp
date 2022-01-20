/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:07:17 by pmira-pe          #+#    #+#             */
/*   Updated: 2022/01/20 19:49:20 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
private:


public:
	Fixed(void);							//canonical
	Fixed(Fixed const &src);				//canonical
	~Fixed(void);							//canonical

	Fixed	&operator=(Fixed const &rhs);	//canonical
};
