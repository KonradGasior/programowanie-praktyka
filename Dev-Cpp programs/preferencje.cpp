#include<iostream>
#include<string>

int main()
{
	const int strsize = 10;
	char * x = new char;
	
	struct zpwd
	{
		std::string imie;
		std::string stanowisko;
		std::string pseudozpdw;
		int pref;
	};
	
	zpwd member[4]
	{
		{"Jan", "Starszy Programista", "Kowal", 1},		
		{"Katarzyna", "Szkoleniowiec", "Daisy", 0},
		{"Peter", "Mlodszy Programista", "Looper", 2},
		{"Roman", "Obsluga Klienta", "Agent", 2}
	};
	while(*x != 'q' || *x != 'Q')
	{
		std::cout << ">>>>>> Lista Czlonkow <<<<<<< \n";
		std::cout << "1. wd. imion  2. wd. stanowisk \n";
		std::cout << "3. wd. Pseud. 4. wd. preferencji \n";
		std::cout << "q. Exit \n Wybor Opcji: ";
		
		std::cin >> *x;
		
		switch (*x)
		{
			case '1':
				{
					std::cout << "----Lista czlonkow wd. imion----" << std::endl;
					int i=0;
					while (i < 4)
					{
					std::cout << member[i].imie << std::endl;
					i++;
					};		
				}break;
			case '2':
				{
					std::cout << "----Lista czlonkow wd. stanowisk----" << std::endl;
					int i=0;
					while (i < 4)
					{
					std::cout << member[i].stanowisko << std::endl;
					i++;
					};		
					break;
				}
			case '3':
				{
					std::cout << "----Lista czlonkow wd. stanowisk----" << std::endl;
					int i=0;
					while (i < 4)
					{
					std::cout << member[i].pseudozpdw << std::endl;
					i++;
					};		
					break;
				}
					break;
			case '4':
				{
					std::cout << "----Lista czlonkow wd. spreferencji----" << std::endl;
					int i=0;
					while (i < 4)
					{
						if(member[i].pref == 0)
							std::cout << member[i].imie << std::endl;
						else if(member[i].pref == 1)
							std::cout << member[i].stanowisko << std::endl;
						else 
							std::cout << member[i].pseudozpdw << std::endl;
					i++;
					};		
					break;
				}
					break;
			case 'q':
					exit(0); break;
			case 'Q':
					exit(0); break;
		}
	};
	return 0;
}
