#include<iostream>
using namespace std;

long double probability(unsigned numbers,unsigned picks);
int main()
{
	double total, choices;
	char * powerball = new char;
	cout << "Podaj najwieksza liczbe, \njaka mozna skreslic oraz liczbe cyfr: ";
	while((cin >> total >> choices) && choices <= total)
	{
		cout << "Szansa wygranej to jeden do ";
		cout << probability(total, choices) << endl;
		cout << "Czy chcesz dolaczyc szanse Power ball? (Y/N): ";
		while(*powerball != 'y' or *powerball != 'n' or *powerball != 'Y' or *powerball != 'N')
		{
			cin >> *powerball;
			if(*powerball == 'y' or *powerball == 'Y')
			{
				double total_p, choices_p;
				cout << "Podaj najwieksza liczbe, \njaka mozna skreslic oraz liczbe cyfr: ";
				cin >> total_p >> choices_p;
				cout << "Po uwzglednieniu losowania Power ball \n szansa wynosi: " 
					<< probability(total, choices) * probability(total_p, choices_p);
			}
			else if (*powerball == 'n' or *powerball == 'N')
				break;
			else
				cout << "Czy chcesz dolaczyc szanse Power ball? (Y/N): ";
		}
		cout << ".\n";
		cout << "Nastepne dwie liczby (q, aby zakonczyc): ";
	}
	cout << "Do widzenia.\n";
	delete powerball;
	return 0;
}

long double probability(unsigned numbers,unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	
	for (n = numbers, p = picks; p > 0; n--, p--)
	result = result * n / p ;
	return result;
}
