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
	
	batonik snack;
	
	snack={"Mocha Munch", 2.5, 350};
	
	cout << "Nazwa batona: " << snack.marka <<endl;
	cout << "Waga: " << snack.waga <<endl;
	cout << "Kalorie: " << snack.kalorie << "kcal"<<endl;
		cout << endl;
	
	return 0;
}
