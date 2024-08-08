#include "Array.hpp"

Array::Array() : _data(nullptr), _n(0)
{
}

Array::~Array()
{
	delete [] data;
}
