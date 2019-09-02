#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	
	char imie[20], nazwisko[20], napis[40];
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	
	strcpy(napis, nazwisko);
	strcat(napis, ", ");
	strcat(napis, imie);
	
	cout <<napis;
	
	return 0;
}
