#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct batonik
	{
		string name;
		float weight;
		int kcal;
	};
	
	batonik * pw = new batonik[2];
	cout << "Podaj nazwe batonika: ";
		getline(cin, pw[0].name);
	cout << "Podaj wage: ";
		cin >> pw[0].weight;
	cout << "Podaj ilosc kcal: ";
		cin >> pw[0].kcal;
			cout << endl;
	
	cin.get();
	
 	cout << "Podaj nazwe batonika: ";
		getline(cin, pw[1].name);
	cout << "Podaj wage: ";
		cin >> pw[1].weight;
	cout << "Podaj ilosc kcal: ";
		cin >> pw[1].kcal;
			cout << endl;
			
	cout << "------------" << endl;
	cout << "Nazwa: " << pw[0].name << endl;
	cout << "Waga: " << pw[0].weight << endl;
	cout << "Kalorie: " << pw[0].kcal << endl;

	cout << "------------" << endl;
	cout << "Nazwa: " << pw[1].name << endl;
	cout << "Waga: " << pw[1].weight << endl;
	cout << "Kalorie: " << pw[1].kcal << endl;
	delete [] pw;
}
