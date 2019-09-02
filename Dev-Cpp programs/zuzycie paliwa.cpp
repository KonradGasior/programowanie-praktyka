#include<iostream>
using namespace std;
int main()
{
	//zle inforomacje wymagane poprawki danych;
	const float mila=62.14;
	const float galon=3.875; //galon na litr.
	
	double benzyna;
	cout<<"Podaj zuzycie benzyny w jedn. Europejksich:      l/100km\b\b\b\b\b\b\b\b\b\b\b\b"; cin>>benzyna;
	
	double g=benzyna/galon;
	double m=mila/g;
	
	cout<<"Zuzycie w jednostkach imperialnych = "<<(int)m<<" m/g";
	
	
	return 0;
}
