#include<iostream>

int fill_array(double [], int);
void show_array(double [], int);
void reverse_array(double [], const int);

int main()
{
	int arr_size;
	std::cout << "Podaj ilosc elementow ktore chcesz wprowadzic: ";
	std::cin >> arr_size;
	double arr[arr_size];
	arr_size = fill_array(arr, arr_size);
	show_array(arr, arr_size);
	reverse_array(arr, arr_size);
	show_array(arr, arr_size);
	return 0;
}

int fill_array(double tab[], int size)
{
	double temp;
	int i;
	for(i = 0; i < size; i++)
	{
		std::cout << "Podaj element " << i << " tablicy: ";
		std::cin >> temp;
		if(!std::cin)
		{
			std::cin.clear();
			while(std::cin.get() != '\n')
			continue;
			std::cout << "Wczytywanie przerwane wprowadzono bledne dane.";
			break;
		}
		else
		tab[i] = temp;
	}
	return i;
};

void show_array(double tab[], int size)
{
	std::cout << "\nZawartosc tablicy\n";
	for(int i = 0; i < size; i++)
		std::cout << "Element" << i << ": " << tab[i] << std::endl;

};

void reverse_array(double tab[], const int size)
{
	int i,j;
	double temp[size];
	j=size - 1;
	for(i = 0; i<=size; i++)
	{
		temp[j] = tab[i];
		j--;
	};
	for(i = 0; i<=size; i++)
	{
		tab[i]=temp[i];
	};
};

