#include<iostream>
using namespace std;

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

//

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student * ps);

void display3(const student pa[], int n);

int main()
{
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "\nGotowe \n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		cout << "\nWprowadz imie i nazwisko studenta: ";
		cin.get(pa[i].fullname, SLEN);
		if(cin.get() != '\n')
		{
			cout << "Wprowadzanie danych przerwane.\n";
			break;
		}
		cout << "Teraz wprowadz jego hobby: ";
		cin.get(pa[i].hobby, SLEN);
		cout << "Wprowadz ooplevel(int): ";
		cin >> pa[i].ooplevel;
		cin.get();
	};
	return i;
};

void display1(student st)
{
	cout << "\nLista Studentow 1\n";
	cout << "Imie i/lub Nazwisko: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
	
	
};

void display2(const student * ps)
{
		cout << "\nLista Studentow 2\n";
		cout << "Imie i/lub Nazwisko: " << ps->fullname<< endl;
		cout << "Hobby: " << ps->hobby<< endl;
		cout << "ooplevel: " << ps->ooplevel<< endl;
};

void display3(const student pa[], int n)
{
	int i = 0;
	for (i; i < n; i++)
	{
		cout << "\nLista Studentow 3\n";
		cout << "Imie i/lub Nazwisko: " << (pa+i)->fullname << endl;
		cout << "Hobby: " << (pa+i)->hobby << endl;
		cout << "ooplevel: " << (pa+i)->ooplevel << endl;
	}	
};
