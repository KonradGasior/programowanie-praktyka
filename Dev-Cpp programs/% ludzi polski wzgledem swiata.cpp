//Program obliczba pocent liczby ludosci Polski(lub innego dowolnego kraju) wzgledem swiata.
#include<iostream>
#include<cmath>
using namespace std;
void dane ()
{
	long long liczba_ludnosci_swiata,liczba_ludnosci_polski;
	cout<<"Podaj aktualna liczbe ludzi na swiecie: "; cin>>liczba_ludnosci_swiata;
	cout<<"Podaj aktualna liczbe ludzi w Polsce: "; cin>>liczba_ludnosci_polski;
	double p=((double)liczba_ludnosci_polski/(double)liczba_ludnosci_swiata)/0.01;
	cout<<"Populacja polski stanowi "<<(float)p<<"% populacji swiata.";
}
int main()
{
	dane();
	return 0;
}
