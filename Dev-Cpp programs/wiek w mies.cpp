#include<iostream>
using namespace std;
void wiek(int w)
{
	cout<<"twój wiek w miesiacach = "<<w*12;
}
int main()
{
	int a;
	cout<<"podaj swoj wiek(w latach): ";
	cin>>a;
	wiek(a);
	return 0;
}
