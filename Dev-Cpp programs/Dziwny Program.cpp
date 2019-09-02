#include<iostream>
#include<string>
using namespace std;

void show(string &, int warunek = 0);

int main()
{
	string txt;
	cout << "wprowadz tekst: ";
	getline(cin, txt);
	show(txt);
	return 0;
}

void show(string & tekst, int warunek)
{
	cout << tekst << endl;
	if(warunek == 0)
		{
			cout << "Czy chcesz podac 2 argument funkcji?(y/n): ";
			char odpowiedz;
			cin >> odpowiedz;
			cin.get();
			if(odpowiedz == 'y' or odpowiedz == 'Y')
			{
				cout << "wprowadz wartosc niezerowa: ";
				cin >> warunek;
				
				show(tekst, warunek);
			}
			else
			{
				cout << "wprowadz tekst: ";
				getline(cin, tekst);
				show(tekst);
				cout << tekst << endl;
				
			}
		} 
			
		
};
