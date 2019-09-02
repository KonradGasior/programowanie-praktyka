#include<iostream>

const int Seasons = 4;

const char * p_Snames[Seasons] = 
{
	"Wiosna",
	"Lato",
	"Jesien",
	"Zima"
};

struct exp
{
	double expenses [Seasons];
};

void fill_it (exp *);
void show_it (exp *);

int main()
{
	exp expn;
	
	fill_it(expn.expenses);
	show_it(expn.expenses);
	return 0;
}

void fill_it(exp * pa)
{
	using namespace std;
	for(int i = 0; i < Seasons; i++)
	{
		cout << "Podaj wydatki za okres >> ";
		cout << p_Snames[i];
		cout << "<<: ";
		cin >> pa->expenses[i];
	}
};

void show_it(exp * pa)
{
	using namespace std;
	double total = 0.0;
	cout << "\nWydatki\n";
	for(int i = 0; i < Seasons; i++)
	{
		cout << p_Snames[i] << ": " << pa->expenses[i] << " zl" << endl;
		total += pa->expenses[i];
	}
	cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
};

