#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string name;
	string dessert;
	
	cout << "Podaj swoje imie:\n";
	getline(cin, name);
	cout << "Podaj swoj ulubiony dessert: \n";
	getline(cin, dessert);
	cout << "Mam dla ciebie " << dessert;
	cout << ", " << name << ".\n";
	return 0;
}
