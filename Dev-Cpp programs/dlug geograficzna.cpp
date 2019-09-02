#include<iostream>
using namespace std;
int main()
{
	//Program wylicza dl. geograficzna w stop,min,sek i zamienia na wart dziesietne
	const int min = 60;
	 const int stop =3600;
	  int stopnie, minuty, sekundy;
	cout<<"Podaj ilosc stopni: "; cin>>stopnie;
	 cout<<"Podaj minuty stopnia luku: "; cin>>minuty;
	  cout<<"Podaj sekundy stopnia luku: "; cin>>sekundy;
	double d_geo;
	d_geo=(double)stopnie+(double)minuty/(double)min+(double)sekundy/(double)stop;
	int reszta_m=minuty%min;
	int reszta_s=sekundy%stopnie;
	cout<<stopnie<<" stopni, "<<reszta_m<<" minut, "<<reszta_s<<" sekund = "<<(double) d_geo<<" stopni";	
	
	return 0;
}
