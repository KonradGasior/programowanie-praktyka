#include<iostream>

using namespace std;

int silnia( int);

int main()
{
	int wartosc,s;
	const int stala_silnia0 = 1;
	cout << "\nPodaj wartosc silni do obliczenia.\n (wprowadz q aby zakoczyc) : ";
		cin >> wartosc;
	while(!cin.fail())
	{
			s = silnia(wartosc);
			if (s == 0)
			s = stala_silnia0;
				cout << "!" << wartosc << " = " << s;
		cout << "\nPonownie wprowadz wartosc.\n (wprowadz q aby zakoczyc) : ";
		cin >> wartosc;
	}
	return 0;
}

int silnia(int number)
{
	if(number < 2)
	{
		return number;
	}
	return number * silnia(number -1);	
}
