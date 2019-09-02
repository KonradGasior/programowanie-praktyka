#include<iostream>
#include<array>
#include<cctype>
int main()
{
	const int count = 9;
	double suma = 0.00;
	std::array<double, count> datki;
	
	for(int i=0; i<=count; i++)
	{
		std::cout << "Wprowadz " << i+1 << " datek: ";
		std::cin >> datki[i];
		
		if(std::cin.fail() == true)
		{
			std::cout << std::endl;
			std::cout << "Niepoprawne Dane! Podana liczba nie jest cyfra.";
			exit(1);
		}
		else
		suma = suma + datki[i];
	};
	
	std::cout << std::endl << "Srednia datkow wynosi: " << suma/count << std::endl;
	std::cout << "datki ktore sa wieksze od sredniej: " << std::endl;
	
	for(int i=0; i<=10; i++)
	{
		if((suma/count)<datki[i])
		std::cout << datki[i] << std::endl;
		
	}
	
	return 0;
}
