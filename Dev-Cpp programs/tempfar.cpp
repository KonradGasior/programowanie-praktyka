#include<iostream>
using namespace std;
int far(double tc)
{
	return (tc*1.8+32);
}
int main()
{
	int tt;
	double t;
		cout<<"podaj temp. w celcjuszach: "; 
		cin>>t;
	tt=far(t);	
		cout<<t<<" stopnie Celcjusza to "<<tt<<" stopni Farhrenheita."<<endl;
	return 0;
}
