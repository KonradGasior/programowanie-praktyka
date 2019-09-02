#include<iostream>
using namespace std;

struct batonik
{
	char * marka;
	float waga;
	int cal;
};

int main();

const batonik & set(batonik & bat, char * Nazwa = (char *)"Milenium Munch", double Wg = 2.85, int kal = 350);
void show(const batonik & bat);

int main()
{
	batonik baton;
	batonik & b = baton;
	int limit = 30;
	cout << "czy chcesz wpisac wartosci struktury?(y/n):\n";
	char ch;
	cin >> ch;
	cin.get();
	if(ch == 'y' or ch == 'Y')
	{
		cout << "Wprowadz nazwe batonika: ";
		cin.get(b.marka, limit);
		cout << "Wprowadz wage: ";
		cin >> b.waga;
		cout << "Wprowadz kalorie: ";
		cin >> b.cal;
		show(set(b, b.marka, b.waga, b.cal));
	}
	else
	show(set(b));
	return 0;
}

const batonik & set(batonik & bat,  char * Nazwa, double Wg, int kal)
{
		
	bat.marka = Nazwa;
	bat.waga = Wg;
	bat.cal = kal;
		
	return bat;
};

void show(const batonik & bat)
{
	cout << "Dane Struktury Batonik:\n";
	cout << "Marka: " << bat.marka << endl;
	cout << "Waga: " << bat.waga << endl;
	cout << "kal: " << bat.cal << endl;
	
}
