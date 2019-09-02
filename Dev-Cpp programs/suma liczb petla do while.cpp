#include<iostream>
int main()
{
	int a;
	int c;
	const int end = 0;
	std::cout << "Program prosi o podanie kolejno liczb i sumuje je podajac ich laczna wartosc w oparciu o juz wczesniej podane."<< std::endl;
	std::cout<<"Podaj liczbe: ";
			std::cin >> a;
		std::cout<<"Obecna suma liczb = " << a << std::endl;
		c=a;
	while(a!=end)
	{
		std::cout<<"Podaj liczbe: ";
			std::cin >> a;
			c=c+a;
		std::cout<<"Obecna suma liczb = " << c << std::endl;
		
		
			
	}
	return 0;
}
