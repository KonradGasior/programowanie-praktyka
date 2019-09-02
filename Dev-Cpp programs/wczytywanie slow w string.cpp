#include<iostream>
#include<string>
int main()
{
	int count = 0;
	std::string slowo;
	
	std::cout << "Podawaj slowa az nie napiszesz gotowe: \n";
	std::cin >> slowo;
	
	while(slowo != "gotowe")
	{
		count++;
		std::cin >> slowo;
	}
	
	std::cout << "Podano " << count << " slow.";
	return 0;
}
