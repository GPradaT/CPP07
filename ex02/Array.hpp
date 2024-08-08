#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class	Array
{
	private:
		T	*_data;
		size_t	_n;
	public:
		T		Array();
		T		~Array();
		T&		Array(unsigned int n);
		Array<&T>	&operator=(const T &src);
		T		Array(const T &src);	
};

#endif
