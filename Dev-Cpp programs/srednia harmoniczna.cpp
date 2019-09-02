#include<iostream>
using namespace std;

double harmony(int x, int y);

int main()
{
	int a, b, srh;
	do
	{
		cout << "\nPodaj 2 liczby. 0 konczy wczytywanie \n liczba 1: ";
			cin >> a;
		if(a ==0)
			break;
		cout << "liczba 2: ";
			cin >> b;
		if(b == 0)
			break;
		srh = harmony(a,b);
			cout << "\nSrednia harmoniczna podanej pary liczb = " << srh << endl;
	}while (a != 0 or b != 0);
	return 0;
}

double harmony(int x, int y)
{
	int hav;
	hav = 2*x*y/(x+y);
	return hav;
};
