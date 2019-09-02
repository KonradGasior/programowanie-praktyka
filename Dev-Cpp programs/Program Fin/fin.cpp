#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
int main()
{
	char ch;
	int count = 0;
	std::string filename;
	std::ifstream fin;
	std::cout << "Podaj nazwe pliku: ";
	std::getline(std::cin, filename);
	fin.open(filename);
		if(!fin.is_open())
		{
			std::cout << "Otwarcie pliku " << filename << " niepowiodlo sie. \n";
			std::cout << "Program zostanie zakonczony. \n";
			exit(EXIT_FAILURE);
		}
		
	fin >> ch;
	
	while(fin.good())
	{
		++count;
		fin >> ch;
	}
	if(fin.eof())
	{
		std::cout << "Koniec pliku. \n";
	}
	else if(fin.fail())
	{
		std::cout << "Wystapil blad podczas wczytywania pliku. Nie wczytano wszystkich znakow.\n";
	}
	else if ( ++count == 0 )
	{
		std::cout << "Niewczytano zadnego znaku. Plik jest pusty. \n";
	}
		std::cout << "ilosc wczytanych znakow: "<< count << std::endl;

	fin.close();
	return 0;
}
