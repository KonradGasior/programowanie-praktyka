#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const int inch_na_ft=12;
	const double cal_na_m=0.0254;
	const float funty_na_kg=2.2;
	
	int stopa;
		cout<<"Podaj wzrost w stopach i calach \n"; cout<<"Podaj stopy: "; cin>>stopa;
	int cal;
		cout<<"Podaj cale: "; cin>>cal; 
	int	funt;
		cout<<"Podaj wage w funtach: "; cin>>funt; cout<<endl;
		
	int cale;
		cale=(stopa*inch_na_ft)+cal;
		cout<<"Cale = "<<stopa<<" * "<<inch_na_ft<<" = "<<cale<<endl;
	double metry;
		metry=cale*cal_na_m;
		cout<<"Metry = "<<cale<<" * "<<cal_na_m; cout<<" = "<<metry<<endl;
		
	double kilogramy;
		kilogramy=funt/funty_na_kg;
		cout<<"Kilogramy = "<<funt<<" / "<<funty_na_kg; cout<<" = "<<kilogramy<<endl;
		
	double BMI;
		BMI=kilogramy/(pow(metry,2));
			cout<<"BMI = "<<kilogramy<<" / "<<"("<<metry<<")^2"; cout<<" = "<<BMI<<endl;
	return 0;
}
