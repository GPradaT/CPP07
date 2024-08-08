#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T, typename U, typename F>
void	iter(T &address,U length_array, F f)
{
	U	i = 0;
	while (i < length_array)
	{
		f(address[i]);
		i++;
	}
}

#endif
