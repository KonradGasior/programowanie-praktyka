#include<iostream>

template <typename T>
void SumArray(T arr[], int n);

template <typename T>
void SumArray(T * arr[], int n);

struct debts
{
	char name[50];
	double amount;
};

int main()
{
	const int count = 6;
	const int count2 = 3;
	using namespace std;
	int things[count] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[count2] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};
	double * pd[count2];
	
	for(int i = 0; i < count2; i++)
		pd[i] = &mr_E[i].amount;
		
	cout << "Counting things of mr E.:\n";
		SumArray(things, count);
		cout << "ilosc rzeczy: " << count;
	cout << "\n\nCounting debts of mr E.:\n";
		SumArray(pd, count2);
		cout << "ilosc pozycji: " << count2;
		return 0;
}

template <typename T>
void SumArray(T arr[], int n)
{
	using namespace std;
	cout << "Template A\n";
	int suma = 0;
	for (int i = 0; i < n; i++)
		suma += arr[i];
	cout << "Sum of value of thins of mr E.: " << suma << endl;	
};

template <typename T>
void SumArray(T * arr[], int n)
{
	using namespace std;
	cout << "Szablon B\n";
	double suma = 0;
	for (int i = 0; i < n; i++)
		suma += *arr[i];
	cout << "Suma dlugow Pana E.: " << suma << endl;
};
