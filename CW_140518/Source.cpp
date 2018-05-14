#include<iostream>
#include"vector.h"
#include"vector.cpp"
using namespace std;

//template <typename T> 
//void print_array (T *arr, size_t n) // size_t - unsigned int
//{
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << "\t";
//	cout << endl;
//}
//template <typename T1, typename T2>
//auto calc(T1 a, T2 b)->decltype(a/b)
//{
//	return a / b;
//}


void main()
{
	/*const int size = 3;
	int a[size] = { 5,6,8 };
	print_array(a, size);

	cout << calc(2, 2.5) << endl;

	int a[5];*/

	array_<int> a(5);
	cin >> a;
	cout << a<<endl;

	system("pause");
}