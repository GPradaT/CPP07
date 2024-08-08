#include "Array.hpp"

template<typename T>
void    f(T &ref)
{
        std::cout << ref << std::endl;
}

template<typename J>
void	j(J &ref)
{
	ref = ref + 2;
}

int	main( void )
{
	int array[] = {1, 10, 12341, -12, 42, -42};
	int	len = sizeof(array)/sizeof(array[0]);
	iter(array, len, f<int>);
	std::cout << "-----------------" << std::endl;
	iter(array, len, j<int>);
	iter(array, len, f<int>);

	std::cout << "===================" << std::endl;
	char ar[] = {'z', 's', 'e', ' ', ']', 'l', 'q', '3'};
	int len_ar = sizeof(ar)/sizeof(ar[0]);
	iter(ar, len_ar, f<char>);
	std::cout << "-----------------" << std::endl;
	iter(ar, len_ar, j<char>);
	iter(ar, len_ar, f<char>);

	return 0;
}
