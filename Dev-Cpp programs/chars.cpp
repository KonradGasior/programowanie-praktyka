#include<iostream>
int main()
{
	const int size = 20;
	char name[size], nick[size];
	int mark, age;
	std::cout<<"Jak masz na imie?: ";
	 std::cin.getline(name,size);
	std::cout<<"Jak sie nazywasz?: ";
	 std::cin>>nick;
	std::cout<<"Na jaka ocene zaslugujesz?: ";
	 std::cin>>mark;
	std::cout<<"Ile masz lat?: ";
	 std::cin>>age;
	
	std::cout<<"Nazwisko: "<<nick<<", "<<name<<"\n";
	std::cout<<"Ocena: "<<mark-1<<"\n";
	std::cout<<"Wiek: "<<age<<"\n";
	return 0;
}
