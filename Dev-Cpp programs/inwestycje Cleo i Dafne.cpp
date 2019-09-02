#include<iostream>
int main()
{
	const double procent_Dafne = 0.10, procent_Cleo = 0.05;  
	long double inwestycja_Dafne = 0, inwestycja_Cleo = 0, kapital_Cleo = 100;
	long long rok=0, kapital_Dafne = 100, suma_zysku_Dafne = 0;
	do
		{
			inwestycja_Dafne = kapital_Dafne * procent_Dafne;
			suma_zysku_Dafne = suma_zysku_Dafne + inwestycja_Dafne;
			inwestycja_Cleo = kapital_Cleo * procent_Cleo;
			kapital_Cleo = kapital_Cleo + inwestycja_Cleo;
			rok++;
			std::cout << rok <<" rok" << std::endl;
			std::cout << " Inwestycja Dafne = " << suma_zysku_Dafne << std::endl;
			std::cout << " Inwestycja Cleo = " << inwestycja_Cleo << std::endl << std::endl; 
			}while(suma_zysku_Dafne > inwestycja_Cleo);
	std::cout << "Po " << rok << " roku inwestycje Cleo przekrocza inwestycje Dafne." << std::endl;
	std::cout << "Zysk Cleo = " << inwestycja_Cleo << std::endl;
	std::cout << "Zysk Dafne = " << suma_zysku_Dafne;
	
	return 0;		
}
