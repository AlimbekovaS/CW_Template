#include "vector.h"
template<typename T>
ostream & operator<<(ostream& os, array_<T> &a)
{
	for (int i = 0;i < a.n;i++)
		cout << a.els[i] << "\t";
	return os;
}

template<typename T>
istream & operator >> (istream & is, array_<T> &a)
{
	for (int i = 0;i < a.n;i++)
		is >> a.els[i];
	return is;
}