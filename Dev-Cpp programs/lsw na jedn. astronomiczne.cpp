#include <iostream>
#include <cmath>
using namespace std;
double danels(double);
int main()
{
	double ls;
	cout<<"Podaj liczbe lat swietlnych: ";
	cin>>ls;
	cout<<ls<<" lat swietlnych = "<<danels(ls)<<" jednostek astronomicznych.";
	return 0;
}

double danels(double a)
{
	return a*63240;
}
