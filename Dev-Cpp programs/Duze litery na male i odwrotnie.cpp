#include<iostream>
#include<cctype>
int main()
{
	std::cout << "Program wczytuje tekst az do wprowadzenia znaku @. \nPomija on tez cyfry oraz zamienia duze litery na male oraz odwrotnie.\n"
	<< "Prosze wprowadzic tekst: ";
	char ch;
	std::cin.get(ch);
	while(ch != '@')
	{
		if(isalpha(ch))
			{
				if( isupper(ch))
				{
					ch=tolower(ch);
					std::cout << ch;
				}
					 
				else
				{
					ch=toupper(ch);
					std::cout << ch;
				}
					 
			}
		else
			if(isblank(ch))
				std::cout << ch;
			else
				if(ispunct(ch))
					std::cout << ch;
			
			
			std::cin.get(ch);
	};
	return 0;
}
