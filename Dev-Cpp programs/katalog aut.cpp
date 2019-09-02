#include<iostream>
#include<string>

int main()
{
	std::cout << "Katalog Aut" << std::endl << std::endl;
	
	struct car
		{
			std::string marka;
			int rok;
		};
	int i;	
	std::cout << "Podaj ile aut chcesz skatalogowac?: ";
	std::cin >> i;
	std::cout << std::endl;	
	car * pcar = new car[i];
	
	for(int j=0; j<=i-1; j++)
		{
			std::cout << "Samochod #" << j+1 << ": " << std::endl;
			std::cout << "Prosze poddac marke: ";
				std::cin.get();
				std::getline(std::cin, pcar[j].marka);
			std::cout << "Podaj rok produkcji: ";
				std::cin >> pcar[j].rok;
		};
		
	for(int j=0; j<=i-1; j++)
		{
			std::cout << pcar[j].rok << " " << pcar[j].marka << std::endl;
		};
	delete [] pcar;
}
