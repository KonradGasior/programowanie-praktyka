#include<iostream>
using namespace std;

struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};
void show_stk(pudlo p);
void obj_p(pudlo * p);

int main()
{
	pudlo pudlo_1;
	cout << "Wypelnij strukture pudlo.\n";

	cout << "Producent: "; cin >> pudlo_1.producent;
	cout << "Wysokosc: "; cin >> pudlo_1.wysokosc;
	cout << "Szerokosc: "; cin >> pudlo_1.szerokosc;
	cout << "Dlugosc: "; cin >> pudlo_1.dlugosc;
	cout << "Objetosc: "; cin >> pudlo_1.objetosc;
	
	show_stk(pudlo_1);
	obj_p(&pudlo_1);
	show_stk(pudlo_1);
	return 0;
}
void show_stk(pudlo p)
{
	cout << "\nWartosci struktury pudlo sa nastepujace: \n";
	cout << "Producent: " << p.producent << endl;
	cout << "Wysokosc: " << p.wysokosc << endl;
	cout << "Szerokosc: " << p.szerokosc << endl;
	cout << "Dlugosc: " << p.dlugosc << endl;
	cout << "Objetosc: " << p.objetosc << endl;
}

void obj_p(pudlo * p)
{
	p->objetosc = p->objetosc * 3;
}

