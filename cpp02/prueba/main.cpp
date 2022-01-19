#include "Sample.hpp"

int	main()
{
	Integer	x(30);
	Integer	y(10);
	Integer	z(0);

	std::cout << "Value of x : " << x << std::endl; //<-- the << is overloaded by the std::ostream <<
	std::cout << "Value of y : " << y << std::endl;
	y = Integer(21);
	std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;

	return (0);
}