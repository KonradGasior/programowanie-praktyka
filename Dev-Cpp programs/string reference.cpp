#include <iostream>
#include <string>
#include <cctype>

void case_up(std::string &);

int main()
{
	std::string x;
	while(std::cin.good())
	{
		std::cout << "\nPodaj lancuch (q, aby skonczyc): ";
		getline(std::cin, x);
		if(x.compare("q") == 0 or x.compare("Q") == 0 )
		{
			break;
		}
		case_up(x);
		std::cout << x;
	}
	std::cout << "\nDo widzenia.";
	return 0;
}

void case_up(std::string & tekst)
{
	int i = 0;
	while(tekst[i] != '\0')
	{
		tekst[i] = toupper(tekst[i]);
		i++;
	}

}
