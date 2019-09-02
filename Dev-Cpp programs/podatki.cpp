#include<iostream>
#include<cctype>

int main()
{
	int kwota, j=0;
	int prog[4] = {5000, 10000, 20000, 35000}, i = 0;
	float tax[4] = {0, 0.10, 0.15, 0.20}, podatek = 0;
	std::cout << "Podaj kwote do opodatkowania: ";
	std::cin >> kwota;
	if(std::cin.fail())
	{
		std::cout << std::endl << "Podana wartosc nie jest liczba! Program zostanie zakonczony. " << std::endl;
		exit(1);
	}else if(kwota < 0) 
		std::cout << std::endl << "Podana wartosc nie moze byc liczba ujemna. Program zostanie zakonczony." << std::endl;
	else
		{
			while(kwota > 0)
			{	
				if(kwota < prog[i])
					{
						podatek = podatek + (kwota * tax[i]);
						kwota =0;
						
					}
				else
					{
						kwota = kwota - prog[i];
						podatek = podatek + (prog[i] * tax[i]);
						i++;
						
					}
				
			}
			std::cout << "Podatek z kwoty wynosi: " << podatek;
		}
		
	return 0;
}
