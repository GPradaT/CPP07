#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <stdexcept>

template<typename T>
class	Array
{
	private:
		T		*_data;
		unsigned int	_n;
	public:
		Array() : _data(NULL), _n(0) {}
		~Array() {delete [] _data;}
		Array(unsigned int n) : _data(new T[n]), _n(n) {}
		Array(const Array &src) : _data(new T[src._n]), _n(src._n)
		{
			for (unsigned int i = 0; i < _n; i++)
				_data[i] = src._data[i];
		}

		Array operator=(const Array &src)
		{
			if (this == &src)
				return *this;
			delete [] this->_data;
			_n = src._n;
			_data = new T[src._n];
			for (unsigned int i = 0; i < src.size(); i++)
				_data[i] = src._data[i];
			return *this;
		}
		T &operator[](unsigned int idx)
		{
			if (idx >= _n)
				throw std::out_of_range("Invalid INDEX");
			return _data[idx];
		}
		const T &operator[](unsigned int idx) const
		{
			if (idx >= _n)
				throw std::out_of_range("Invalid INDEX");
			return _data[idx];
		}

		unsigned int	size() const {return _n;}
};

#endif
