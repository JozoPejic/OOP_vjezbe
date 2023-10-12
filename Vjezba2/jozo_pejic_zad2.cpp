/*Napisati funkciju koja vraća referencu na neki element niza. Koristeći po-
vratnu vrijednost funkcije kao lvalue uvećajte i-ti element niza za jedan.*/

#include<iostream>

int& lvalue(int *a) {

	int& neki_element = a[2];

	return neki_element;
}

int main() {

	int n;
	int neki_element;

	std::cout << "Unesite broj clanova niza: " << std::endl;
	std::cin >> n;

	int *a = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}

	lvalue(a)++;


	for (int i = 0; i < n; i++) {
		std::cout << a[i] << std::endl;
	}
}