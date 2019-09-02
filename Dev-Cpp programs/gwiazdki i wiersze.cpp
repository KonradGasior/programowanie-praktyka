#include<iostream>
using namespace std;
int main()
{
	int wiersze, i, j, k;
	cout << "Podaj ilosc wierzszy: ";
	cin >> wiersze;
	for(i=1; i<wiersze+1; i++)
	{
		cout << endl;
		for(j=i; j<wiersze; j++)
		{
			cout << ".";
		}
		for(k=1; k<=i; k++)
		{
			cout << "*";
		}
	}
	return 0;
}
