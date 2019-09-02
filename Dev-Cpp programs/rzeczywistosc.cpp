#include<iostream>
using namespace std;
#include<cstring> // dla strlen(), strcpy()
struct stringy{
	char * str; // wskazuje lancuch
	int ct; // dlugosc lancucha (bez \0')
};

//tutaj prototypy set(), show() i show();

void set(stringy &, char []);
void show(const stringy, int ln = 1);
void show(const char [], int ln = 1);

int main()
{
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";
	
	set(beany, testing);	// pierwszy parametr jako referencja,
	// alokacja pamieci na wynik sprawdzania,
	// ustawienie pola str struktury beany tak, by wskazywal nowy blok;
	// kopiowanie testing do nowego bloku,
	// ustawienie pola ct zmiennej beany
	show(beany); // pokazuje napis z pola raz
	show(beany, 2); // pokazuje napis z pola dwa razy
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing); // pokazuje lancuch testing raz
	show(testing, 3); // pokazuje lancuh testing trzykrotnie 
	show((char*)"Gotowe!");
	return 0;
	
}

void set(stringy & b, char test [])
{

	char * p_wynik = new char;
	b.str = p_wynik;
	strcpy(b.str, test);
	b.ct = strlen(b.str);
};

void show(const stringy b, int ln)
{
	int i = 0;
	for(i; i < ln; i++)
	cout << b.str << endl;
};

void show(const char test [], int ln)
{
	int i = 0;
	for(i; i < ln; i++)
	cout << test << endl;
};
