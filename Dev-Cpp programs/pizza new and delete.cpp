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
		
	pizza * pw = new pizza;
	
	cout << "Podaj srednice pizzy: ";
		cin >> pw->size;
		cin.get();
	cout << "Podaj nazwe firmy produkujacej pizze: ";
		getline(cin, pw->name);
		
	cout << "Podaj wage pizzy: ";
		cin >> pw->weight;
		
	cout << "-----Pizza Database-----" << endl;
	cout << "Srednica: " << pw->size << endl;
	cout << "Nazwa firmy: " << pw->name << endl;
	cout << "Waga: " << pw->weight << endl;
	
	delete pw;
	
	return 0;
}
