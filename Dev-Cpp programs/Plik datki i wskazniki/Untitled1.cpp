#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cctype>
using namespace std;

struct datki
	{
		string nazwisko;
		double kwota;
	};
	
int main ()
{
	string filename;
	int count_over = 0, count_under = 0, Ar_Size, i = 0, count, prog = 10000;
	ifstream fin;
	cout << "Podaj nazwe pliku z ktorego nalezy wczytac dane: ";
	getline(cin, filename);
	fin.open(filename);
			if(!fin.is_open())
		{
			cout << "Otwarcie pliku " << filename << " niepowiodlo sie. \n";
			cout << "Program zostanie zakonczony. \n";
			exit(EXIT_FAILURE);
		}
	fin >> Ar_Size;
		datki * datki_p = new datki[Ar_Size];
	while(!fin.eof())
		{
			fin >> datki_p[i].nazwisko;
			fin >> datki_p[i].kwota;
			if(datki_p[i].kwota >= prog)
						count_over = count_over + 1;
						 else if(datki_p[i].kwota > 0 and datki_p[i].kwota < prog)
						 	count_under = count_under + 1;
			i++; 
		}
	cout << "wczytywanie zakonczone \n";
	std::cout << std::endl << "Nasi wspaniali sponsorzy" << std::endl;
	for(i = 0; i < Ar_Size; i++ )
		{
				if(count_over == 0)
						{
							std::cout << "Brak" << std::endl;	
						}
				else if(datki_p[i].kwota >= prog)
						{
							std::cout << datki_p[i].nazwisko << ": " << datki_p[i].kwota << std::endl;
						}
		};
		std::cout << std::endl << "Nasi sponsorzy" << std::endl;
		
		for(i = 0; i < Ar_Size; i++ )
		{
				if(count_under == 0)
					{
						std::cout << "Brak" << std::endl;	
					}
				else if(datki_p[i].kwota < prog)
					{
						std::cout << datki_p[i].nazwisko << ": " << datki_p[i].kwota << std::endl;
					}
		};	
	fin.close();
	delete [] datki_p;
	return 0;
}
