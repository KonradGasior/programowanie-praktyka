#include<iostream>
#include<array>
const int ArSize = 15;
int main()
{
	using namespace std;
	array <long double, ArSize> a1;
	a1[0]=a1[1]=1;
	for(int i=2; i <= ArSize; i++)
		a1[i] = i * a1[i-1];
	for (int i = 0; i <= ArSize; i++)
		cout << i <<"! = " << a1[i] << endl;
	return 0;
}
