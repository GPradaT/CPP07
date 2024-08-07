#include <iostream>

template<typename T>
T	max(T const &x, T const &y)
{
	return ((x >= y) ? x : y);
}

template<typename T>
T	min(T const &x, T const &y)
{
	return ((x <= y) ? x : y);
}

template<typename T>
void	swap(T *x, T *y)
{
	T *temp;

	temp = x;
	x = y;
	y = temp;
}

int	main( void )
{
	int	a = 3;
	int	b = 65;
	float	a1 = 72;
	float	b1 = 23;
	double	a2 = 6;
	double	b2 = 45;
	unsigned int a3 = 13;
	unsigned int b3 = 61;

	std::cout << max(a, b) << std::endl;
	std::cout << min(a1, b1) << std::endl;
	::swap(a2, b2);
	std::cout << a2 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << "=============" << std::endl;
	return 0;
}
