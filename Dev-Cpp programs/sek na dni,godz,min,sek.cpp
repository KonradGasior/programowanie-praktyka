#include<iostream>
using namespace std;
int main()
{
	const long min=60;
	const long h=3600;
	const long day=86400;
	long long sek;
		cout<<"Podaj ilosc sekund: "; cin>>sek;
		long long rdni=sek%day;
		long g=rdni/h;
		long rgodz=rdni%h;
		long m=rgodz/min;
		long rmin=rgodz%min;
		long s=rmin;
		cout<<sek<<" sekund = "<<sek/day<<" dni, "<<g<<" godzin, "<<m<<" minut, "<<s<<" sekund";
	return 0;
}
