#include<iostream>
#include<cstring>

int main()
{
	char ch[80];
	int count = 0;
	
	std::cout << "Podawaj slowa az nie napiszesz gotowe: \n";
	std::cin >> ch;
	while(strcmp(ch, "gotowe") != 0)
	{
		std::cin >> ch;
		count++;
	}
	
	std::cout << "wczytane slowa: " << count;
		
		return 0;
}
