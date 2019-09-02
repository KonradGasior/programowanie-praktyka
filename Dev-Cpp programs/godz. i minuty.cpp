#include <iostream>
using namespace std;
void gm(int a,int b)
{
	cout<<"Czas: "<<a<<":"<<b;
}
int main()
{
	int g,m;
	cout<<"Podaj liczbe godzin: "; cin>>g;
	cout<<"Podaj liczbe minut: "; cin>>m;
	gm(g,m);
	return 0;
}
