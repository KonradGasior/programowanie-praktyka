#include<iostream>
const int max1 = 10;
using namespace std;

int fill_array(float ar[], int);
void show_array(const float ar[], int);
float average_array(float ar[], int);

int main()
{
	int size;
	float average;
	float tab[max1];
	size = fill_array(tab, max1);
	show_array(tab, size);
	cout << endl << "srednia: "<< average_array(tab, size);
	return 0;
}

int fill_array(float ar[], int count)
{
	int i;
	double temp;
	cout << "\nPodawaj 10 wynikow golfowych albo liczbe ujemna by zakonczyc.\n";
	for(i= 0; i < count; i++)
	{
		cout << "wynik " << i+1 << ": ";
		cin >> temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get() != '\n')
				continue;
			cout << "Bledne dane wprowadzanie wynikow przerwane!";
			break;
		}
		else if (temp < 0)
		break;
		ar[i] = temp;
	}
	return i;
}
void show_array(const float ar[], int n)
{
	int i = 0;
	cout <<"Podane wyniki" << endl;
	for(i = 0; i < n; i++)
	cout << "W " << i+1 << ": " << ar[i] << " ";
	
}
float average_array(float ar[], int n)
{
	float sum_ar = 0;
	for(int i = 0; i <= n; i++)
		sum_ar = sum_ar + ar[i];
	
	return (sum_ar/n);
}


