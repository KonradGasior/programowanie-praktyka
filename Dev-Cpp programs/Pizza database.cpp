#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct pizza
	{
		string name;
		int size;
		float weight;
	};
	
	pizza product[9];
	
	cout << "Nazwa producenta pizzy: ";
	 	getline (cin, product[0].name);

			
	cout << "Podaj wielkosc pizzy w calach: ";
		cin >> product[0].size;
		
	cout << "Podaj wage produktu: ";
		cin >> product[0].weight;
			
	cout << " -----PIZZA DATA SAVED-----"<< endl;
	cout << "Nazwa producenta: " << product[0].name << endl;
	cout << "Rozmiar: " << product[0].size << endl;
	cout << "Waga: " << product[0].weight << endl;
	
	return 0;
}
