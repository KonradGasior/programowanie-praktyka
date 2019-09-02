#include<iostream>
#include<string>
int main()
{
	using namespace std;
	
	struct batonik
		{
			string marka;
			float waga;
			int kalorie;
		};
	
	batonik snack[2];
	
	snack[0]={"Mocha Munch", 2.5F, 350};
	snack[1]={"Snickers", 5.1F, 250};
	snack[2]={"Mars", 4.7F, 212};
	
	cout << "Nazwa batona: " << snack[0].marka <<endl;
	cout << "Waga: " << snack[0].waga <<endl;
	cout << "Kalorie: " << snack[0].kalorie << "kcal"<<endl;
		cout << endl;
	cout << "Nazwa batona: " << snack[1].marka <<endl;
	cout << "Waga: " << snack[1].waga <<endl;
	cout << "Kalorie: " << snack[1].kalorie << "kcal"<<endl;
		cout << endl;
	cout << "Nazwa batona: " << snack[2].marka <<endl;
	cout << "Waga: " << snack[2].waga <<endl;
	cout << "Kalorie: " << snack[2].kalorie << "kcal"<<endl;
	
	return 0;
}
