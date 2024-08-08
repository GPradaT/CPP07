#include "whatever.hpp"

int	main( void )
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		int	a = 3;
		int	b = 65;
		float	a1 = 72;
		float	b1 = 23;
		double	*a2 = new double();
		*a2 = 6;
		double	*b2 = new double();
		*b2 = 45;
		unsigned int *a3 = new unsigned int();
		*a3 = 13;
		unsigned int *b3 = new unsigned int();
		*b3 = 61;
	
		std::cout << "=======================" << std::endl;
		std::cout << "a = " << a << std::endl << "b = "<< b << std::endl;
		std::cout << "max(a, b) 	= " << ::max(a, b) << std::endl;
		std::cout << "a1 = " << a1 << std::endl << "b1 = "<< b1 << std::endl;
		std::cout << "min(a1, b1) 	= " << ::min(a1, b1) << std::endl;
		std::cout << "=======SWAP DEMO=======" << std::endl;
		std::cout << "Value of a2	= " << *a2 << std::endl;
		std::cout << "Value of b2	= " << *b2 << std::endl;
		std::cout << "Value of a3	= " << *a3 << std::endl;
		std::cout << "Value of b3	= " << *b3 << std::endl;
		std::cout << "=======================" << std::endl;
		::swap(*a2, *b2);
		::swap(*a3, *b3);
		std::cout << "Value of a2	= " << *a2 << std::endl;
		std::cout << "Value of b2	= " << *b2 << std::endl;
		std::cout << "Value of a3	= " << *a3 << std::endl;
		std::cout << "Value of b3	= " << *b3 << std::endl;
		std::cout << "=======================" << std::endl;
	
		delete a2;
		delete a3;
		delete b2;
		delete b3;
	}	
		return 0;
}
