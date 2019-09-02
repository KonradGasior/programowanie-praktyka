#include<iostream>
using namespace std;

template <typename T>

T max5(T tab[5]);
int main()
{
	int tab_int[5] = {1, 2, 3, 4, 5};
	double tab_double[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; 
	cout << "najw. wartosc dla int: " << max5(tab_int);
	cout << "\nnajw. wartosc dla double: " << max5(tab_double);
	return 0;
}

template <typename T>
T max5(T tab[])
{
		int i;
		T top = 0;
		for(i = 0; i < 5; i++)
		{
			if(top < tab[i])
				top = tab[i];
		};
	return top;
};
