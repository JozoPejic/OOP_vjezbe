//Napisati funkciju koja računa najveći i najmanji broj u nizu od n prirodnih
//brojeva.Funkcija vraća tražene brojeve pomoću referenci.

#include<iostream>

void MinMax(int &min, int &max, int *a, int n)
{
	min = a[0];
	max = a[0];

	for (int i = 0; i < n; i++) {
		if (a[i] > max){
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}
}

int main() {

	int n, min, max;

	std::cout << "Unesi broj clanova niza: ";
	std::cin >> n;

	int *a = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	MinMax(min, max, a, n);

	std::cout << "Najmanji clan niza je: " << min << std::endl;
	std::cout << "Najveci clan niza je: " << max << std::endl;
}