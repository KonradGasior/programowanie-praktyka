#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout<<"TEN PROGRAM PODAJE WZROST ZAMIENIONY Z CM NA STOPY ORAZ CALE \n";
	
	const double stopa=30.48;
	int cm;
	cout<<"Podaj wzrost w cm: "; cin>>cm;
	int ft=cm/stopa;
	int inch=cm%(int)stopa;
	cout<<cm<<" cm, twoj wzrost jest równy w stopach: "<<ft<<" St oraz "<<inch<<" cali."; //program nie dokladny albo trace dokladnosc przez konwersje.
	//mozliwe ze na tym etapie nie jestem w stanie uzyskac zadowalajacego wyniku.
	
	return 0;
}
