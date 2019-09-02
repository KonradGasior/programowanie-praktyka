#include<iostream>
#include<cctype>
#include<string>
#include<cstring>

struct datki
	{
		std::string nazwisko;
		double kwota;
	};
int main()
	{
		int prog = 10000;
		int Ar_Size;
		std::cout << "Podaj ilosc wplacajacych: ";
		std::cin >> Ar_Size;
	
		datki * datki_p = new datki[Ar_Size];
		std::cout << std::endl;
		
		int count_over = 0, count_under = 0;
		
		for(int i = 0; i < Ar_Size; i++ )
		{
				std::cin.get();
				std::cout << "Nazwisko wplacajacego: "; 
					getline(std::cin, datki_p[i].nazwisko);
				std::cout << "Podaj kwote: "; 
				std::cin >> datki_p[i].kwota;
					if(datki_p[i].kwota >= prog)
						count_over = count_over + 1;
						 else
						 	count_under = count_under + 1;
		};
		
		std::cout << std::endl << "Nasi wspaniali sponsorzy " << std::endl;
		for(int i = 0; i <= Ar_Size; i++ )
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
		
		for(int i = 0; i < Ar_Size; i++ )
		{
				if(count_under == 0)
					{
						std::cout << "Brak" << std::endl;
						break;	
					}
				else if(datki_p[i].kwota < prog)
					{
						std::cout << datki_p[i].nazwisko << ": " << datki_p[i].kwota << std::endl;
					}
		};
		
		delete [] datki_p;
		return 0;
	}
