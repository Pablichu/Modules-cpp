#pragma once
#include <iostream>

class	Integer
{
	public:

		Integer(int const n);
		~Integer(void);

		int	getValue(void) const;

		Integer	&operator=(Integer const &rhs); //<-- allow a = b = c = d;
		Integer	operator+(Integer const &rhs) const; //<-- 1 + 2 + 3 + 4

	private:

		int _n;
};

std::ostream & operator<<(std::ostream &o, Integer const &rhs);