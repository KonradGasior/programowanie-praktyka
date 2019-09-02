#include<iostream>
#include<cstring>
using namespace std;
const int size1 = 5, size2 = 4, size3 = 5;
template <typename T>
T maxn(T tab[], int);
template <> const char * maxn <const char *> (const char * tab[], int n);

int main()
{
	const char * wynik;
	int tab_i[size1] = {1, 2, 3, 4, 5 };
	double tab_d[size2] = {1.1, 2.2, 3.3, 4.4};
	const char * tab_ch[size3] = {"N1", "Na2", "Nap3", "Napi4", "Napi5"};
	cout << "max number of int array: " << maxn(tab_i, size1) << endl;
	cout << "max number of double array: " << maxn(tab_d, size2) << endl;
	wynik = maxn(tab_ch, size3);
	cout << "Adress of the longest string: " << &wynik << endl;
	
	return 0;
}

template <typename T>
T maxn(T tab[], int length)
{
	int i;
		T top = 0;
		for(i = 0; i < length; i++)
		{
			if(top < tab[i])
				top = tab[i];
		};
		
		return top;
		
};

template <> const char * maxn <const char *> (const char * tab[], int n)
{
	int i;
	const char * top_len = tab[0];
	for(i = 0; i <= n; i++)
	{
		if(strlen(tab[i]) > strlen(top_len))
		top_len = tab[i];
	}
	return top_len;
};
