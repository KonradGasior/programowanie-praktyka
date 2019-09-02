#include<iostream>
#include<array>
using namespace std;
int main()
{
	array <float, 3> a1;
	
	cout << "Podaj 3 wyniki sprintu na 100m: " << endl;
	cout << "wynik 1: "; cin >> a1[0];
	cout << "wynik 2: "; cin >> a1[1];
	cout << "wynik 3: "; cin >> a1[2];
	
	float average;
	
	average = ( a1[0] + a1[1] + a1[2] ) / 3;
	
	cout << "Przy podanych czasach: " << a1[0] << ", " << a1[1] << ", " << a1[2] << endl;
	cout << "Srednia zawodnika wynosi: " << average << "sek";
	
	return 0;
}
