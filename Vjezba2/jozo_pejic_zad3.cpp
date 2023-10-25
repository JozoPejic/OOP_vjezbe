#include "vector.hpp"

int main() {

	Vector v1;
	v1.vector_new(5);

	/*for (int i = 0; i < v1.fizicka_velicina; i++) {
		cout << v1.niz[i] << " " << endl;
	}*/

	int broj;

	cout << "Unesite clanove niza, za prekid unesite 0." << endl;
	cin >> broj;

	while (broj != 0) {
		v1.vector_push_back(broj);
		cin >> broj;
	}

	v1.printanje_vectora();

	cout << "Prvi clan niza: " << v1.vector_front() << endl;
	cout << "Zadnji clan niza: " << v1.vector_back() << endl;
	cout << "Logicka velicina niza: " << v1.vector_size() << endl;

	cout << "Zadnji element uklonjen: " << endl;
	v1.vector_pop_back();
	v1.printanje_vectora();

	v1.vector_delete();
	v1.printanje_vectora();
}	


