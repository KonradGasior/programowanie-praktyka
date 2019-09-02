#include<iostream>
//wszystkie funkcje maja miec 2 wskazniki ktore beda okreslac poczatek oraz koniec tablicy.
//funkcja fill_array musi zwracac wskaznik elementu znajdujacego sie za ostatnim wczytanym.
const int Max = 5;

double * fill_array(double * ar, int limit);
void show_array(const double * ar, double * n);
void revalue(double r, double * ar, double * n);

int main()
{
	using namespace std;
	double properties[Max];
	double * prop = properties;
	double * size = fill_array(prop, Max);
	show_array(prop, size);
	if (size > 0)
	{
		cout << "Podaj czynnik zmiany wartosci: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "niepoprawna wartosc; podaj liczbe: ";
		}
		revalue(factor, prop, size);
		show_array(prop, size);
	}
	cout << "Gotowe.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double * ar, int limit)
{
	using namespace std;
	int i;
	double temp;
	for(i = 0; i < limit; i++)
	{
		cout << "Podaj wartosc nr " << (i+1) << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bledne dane! Wczytywanie danych przerwane.\n";
		}
		else if (temp < 0)
			break;
		*(ar+i) = temp;
	}
	return (ar+i)+1; // tu ma zwracac wskaznik
}

void show_array(const double * ar, double * n)
{
	using namespace std;
	int i = 0;
	for(ar; ar < n-1; ar++)
	{
		cout << "Nieruchomosc nr " << (i+1) << ": ";
		cout << *ar << endl;
	}
}

void revalue(double r, double * ar, double * n)
{
	
	for(ar; ar < n-1; ar++)
		*ar *= r;		
}
