#include<iostream>

const int Seasons = 4;

const char * p_Snames[Seasons] = 
{
	"Wiosna",
	"Lato",
	"Jesien",
	"Zima"
};

void fill(double []);
void show(double []);

int main()
{
	
	double expenses [Seasons];
	fill(expenses);
	show(expenses);
	return 0;
}

void fill(double pa[Seasons])
{
	using namespace std;
	for(int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >> ";
		cout << p_Snames[i];
		cout << "<<: ";
		cin >> pa[i];
	}
};

void show(double da[Seasons])
{
	using namespace std;
	double total = 0.0;
	cout << "\nWydatki\n";
	for(int i = 0; i < Seasons; i++)
	{
		cout << p_Snames[i] << ": " << da[i] << " zl" << endl;
		total += da[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}

