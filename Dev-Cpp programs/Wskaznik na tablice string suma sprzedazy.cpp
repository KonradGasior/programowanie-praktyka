#include<iostream>
#include<string>

const int ArrSize = 12;
int main()
{
	int sales[11], suma = 0;
	
	 const std::string * p_mies = new const std::string [ArrSize] 
	 { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	 
	 std::cout << "Podaj Sprzedaz dla kolejno 12 miesiecy." << std::endl;
	 
	 for (int i = 0; i <= 11; i++)
	 	{
	 	   std::cout << std::endl << "Ilosc ksiazek sprzedanych w " << p_mies[i] <<": ";
	 	   std::cin >> sales[i];
	 	   suma = suma + sales[i];
		 };
		 std::cout << std::endl;
		std::cout << "Suma sprzedazy za caly rok wynosi: " << suma;
	delete [] p_mies;
	return 0;
}
