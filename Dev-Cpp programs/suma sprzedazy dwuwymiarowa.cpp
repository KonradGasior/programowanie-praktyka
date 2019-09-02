#include<iostream>
#include<string>
const int years = 2;
const int months = 12;
int main()
{
	const std::string * p_mies = new const std::string [months]
	 { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	 
	int sales[years][months];
	 int y,m;
	 int year_sales[years]{0};
 		year_sales[2] = 0;
	 for(y=0; y<=2; y++)
	 {
	 	std::cout << "Podaj sprzedaz dla " << y<< " roku w podanym miesiacu." << std::endl << std::endl;
	 	for(m=0; m<=11; m++)
	 	{
	 		std::cout <<"podaj sprzedaz w "<< p_mies[m] << ": " << std::endl;
	 		std::cin >> sales[y][m];
	 		
		 };
		 std::cout << std::endl;
	 };
	 
	 std::cout << "Sprzedaz roczna ksiazek c++ w ostatnich 3 latach" << std::endl << std::endl;
	 
	 for(y=0; y<=2; y++)
	 {
	 	
	 	std::cout << y <<" rok: \t";
	 	for(m=0; m<=11; m++)
	 	{
	 		std::cout << sales[y][m] << "\t";
	 		year_sales[y] = year_sales[y] + sales[y][m];
		 };	 
		std::cout << "w sumie: " << year_sales[y] << std::endl; 
	 };
	 delete [] p_mies;
	return 0;
}
