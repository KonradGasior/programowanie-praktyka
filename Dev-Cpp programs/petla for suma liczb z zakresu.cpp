#include<iostream>
int main()
{
	int a,b;
	std::cout << "Program zlicza sume pomiedzy 2 wybranymi liczbami wliczjac je same wlacznie." << std::endl;
	std::cout << "Prosze podac 1 liczbe: ";
		std::cin >> a;
	std::cout << "Prosze podac 2 liczbe: ";
		std::cin >> b;
	int c=0;
	int i=a;
	for(i; i<=b; i++)
		c=c+i;
	std::cout << "Suma liczb z podanego zakresu od " << a << " do " << b << " wynosi: " << c;	
	return 0;
}
